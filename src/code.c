#include <code.h>

// private method
int __calculateSpanDim(Node *dimNode, int width, int initializerSize, int depth)
{
    int spanDim = atoi(dimNode->val);
    if (depth == 0 && spanDim == 0)
    {
        return 4;
    }
    if (spanDim == 0)
    {
        // [] empty
        if (dimNode->arrayDim != NULL)
        {
            // [][] empty
            error(dimNode->line, ARRAY_INCOMPLETED);
        }
        if (initializerSize == 0)
            spanDim = 1;
        else
            spanDim = initializerSize;
    }
    else
    {
        // [num]
        if (dimNode->arrayDim != NULL)
        {
            spanDim = spanDim * __calculateSpanDim(dimNode->arrayDim, width, initializerSize / spanDim, depth + 1);
        }
    }
    if (depth == 0)
    {
        return spanDim * width;
    }
    else
    {
        return spanDim;
    }
}

void __getOffset(Node *node)
{
    // DEBUG: printf("runtime:%s, level:%d, offset:%d\n", node->runtime->namespace, node->runtime->level, node->runtime->offset);
    /* node should be var */

    // get offset
    if (node->ptrStar != 0)
    {
        node->width = 4;
    }
    else if (strstr(node->valType, "int"))
    {
        node->width = 4;
    }
    else if (strstr(node->valType, "float"))
    {
        node->width = 4;
    }
    else if (strstr(node->valType, "char"))
    {
        node->width = 1;
    }
    else if (strstr(node->valType, "void"))
    {
        node->width = 0;
    }
    else if (strstr(node->valType, "struct_"))
    {
        Runtime *runtime = findRuntimeByNamespace(structEnv, node->valType);
        node->width = runtime->offset;
    }
    if (node->arrayDim != NULL)
    {
        int initializerSize = 0;
        if (node->initializer != NULL)
        {
            initializerSize = node->initializer->numOfChildren;
        }
        node->width = __calculateSpanDim(node->arrayDim, node->width, initializerSize, 0);
    }
    node->symbol->offset = node->runtime->offset + node->width;
    node->runtime->offset += node->width;
}

void initCodeManager()
{
    manager = (CodeManager *)malloc(sizeof(CodeManager));
    manager->size = 0;
    manager->line = 0;
}

Code *createCode(int line, int op, char *arg1, char *arg2)
{
    Code *code = (Code *)malloc(sizeof(Code));
    code->line = line;
    code->op = op;
    code->arg1 = NULL;
    code->arg2 = NULL;
    if (arg1 != NULL)
    {
        code->arg1 = (char *)malloc(strlen(arg1));
        strcpy(code->arg1, arg1);
    }
    if (arg2 != NULL)
    {
        code->arg2 = (char *)malloc(strlen(arg2));
        strcpy(code->arg2, arg2);
    }
    return code;
}

/**
 * Global:
 * def -> 1
 * dec -> many
 *
 * Local:
 * def -> 1
 * dec -> 1
 */

int __dealVar(Node *var, int isGlobal, int isDeclare)
{
    int varCnt = 1;
    /**
     * --VAR
     * ---*property
     * ------lexeme
     * ------val
     * ------valType
     * ------valModifier
     * ------complexType
     * ------arrayDim
     * ------ptrStar
     * ------initializer
     * ---*nextVar[0]
     */
    if (isGlobal == 1)
    {
        // distinguish declare and defination
        if (isDeclare == 1)
        {
            // declare
            if (var->symbol->duplicate == 1)
            {
                // duplicate, remove variable declaration
                deleteSymbol(var->runtime, var->symbol->pos);
            }
            else
            {
                // do not duplicate, calculate offset
                __getOffset(var);
                var->symbol->isDefination = 0;
            }
        }
        else
        {
            // defination
            if (var->symbol->duplicate == 1)
            {
                // duplicate, find the redefination from the front symbols
                // if meet declaration, set isDefination = 1 (first succeed, second will fail)
                int hasDefinated = lookAheadDefination(var->runtime, var->symbol);
                if (hasDefinated)
                {
                    // yes
                    error(var->line, VARIABLE_REDEFINED, var->lexeme);
                }
                deleteSymbol(var->runtime, var->symbol->pos);
            }
            else
            {
                // do not duplicate
                __getOffset(var);
                var->symbol->isDefination = 1;
            }
        }
    }
    else
    {
        // do not distinguish declare and defination
        if (var->symbol->duplicate == 1)
        {
            // redefination
            deleteSymbol(var->runtime, var->symbol->pos);
            error(var->line, VARIABLE_REDECLARED, var->lexeme);
        }
        else
        {
            // set defination
            __getOffset(var);
        }
    }
    for (int i = 0; i < var->numOfChildren; i++)
    {
        // deal with next variable, and add it to varCnt
        varCnt += __dealVar(var->children[i], isGlobal, isDeclare);
    }
    return varCnt;
}

void __dealStmts(Node *stmts)
{
    /**
     * node can be -> program, statments, expression, ...
     */
    switch (stmts->type)
    {
    case PROGRAM:
        /**
         * PROGRAM
         * --VAR_DEF
         * --VAR_DEC
         * --FUNC_DEF
         * --FUNC_DEC
         * --STRUCT_DEF
         */
        for (int i = 0; i < stmts->numOfChildren; i++)
        {
            __dealStmt(stmts->children[i], 1);
        }
        break;
    case STMTS:
        /**
         * STMTS
         * --VAR_DEF
         * --VAR_DEC
         * --STMT (IF, WHILE, FOR, Exp...)
         */
        for (int i = 0; i < stmts->numOfChildren; i++)
        {
            __dealStmt(stmts->children[i], 0);
        }
        break;
    default:
        break;
    }
}

void __dealStmt(Node *stmt, int isGlobal)
{
    switch (stmt->type)
    {
    case VAR_DEF:
    { /**
       * VAR_DEF
       * --VAR
       * -----*property
       * -----VAR
       */
        __dealVar(stmt->children[0], isGlobal, 0);
        break;
    }
    case FUNC_DEF:
    { /**
       * FUNC_DEF
       * --VAR
       * --ARG_DEC (?)
       * --STMTS (?)
       */
        Node *var = stmt->children[0];
        __dealVar(var, isGlobal, 0);
        int numOfArgs = 0;
        if (stmt->numOfChildren > 1)
        {
            if (stmt->children[1]->type == ARG_DEC)
            {
                // ARG_DEC
                numOfArgs = __dealVar(stmt->children[1]->children[0], 0, 1);
            }
            else
            {
                // STMTS
                __dealStmts(stmt->children[1]);
            }
        }
        if (stmt->numOfChildren > 2)
        {
            // STMTS
            __dealStmts(stmt->children[2]);
        }
        var->symbol->numOfArgs = numOfArgs;
        break;
    }
    case STRUCT_DEF:
    { /**
       * STRUCT_DEF
       * --*property
       * --STMTS (?)
       * --VAR_DEF/VAR_DEC (?)
       */
        __getOffset(stmt);
        if (stmt->numOfChildren > 0)
        {
            if (stmt->children[0]->type == STMTS)
            {
                // STMTS
                __dealStmts(stmt->children[0]);
            }
            else
            {
                // VAR_DEF or VAR_DEC
                __dealStmt(stmt->children[0], 0);
            }
        }
        if (stmt->numOfChildren > 1)
        {
            // VAR_DEF or VAR_DEC
            __dealStmt(stmt->children[1], 0);
        }
        break;
    }
    case VAR_DEC:
    { /**
       * VAR_DEC
       * --VAR
       * -----*property
       * -----VAR
       */
        __dealVar(stmt->children[0], isGlobal, 1);
        break;
    }
    case FUNC_DEC:
    { /**
       * FUNC_DEC
       * --VAR
       * --ARG_DEC (?)
       */
        Node *var = stmt->children[0];
        __dealVar(var, isGlobal, 1);
        int numOfArgs = 0;
        if (stmt->numOfChildren > 1)
        {
            // ARG_DEC
            numOfArgs = __dealVar(stmt->children[1]->children[0], 0, 1);
        }
        var->symbol->numOfArgs = numOfArgs;
        break;
    }
    case FOR:
    { /**
       * FOR
       * --FOR_START_STMT (deslStmt)
       * --FOR_COND_STMT  (dealStmt)
       * --FOR_ITER_EXP   (dealExp )
       */
        for (int i = 0; i < stmt->numOfChildren; i++)
            __dealStmt(stmt->children[i], 0);
        break;
    }
    case FOR_START_STMT:
    { /**
       * FOR_START_STMT
       * --VAR_DEF / Exp (?)
       */
        if (stmt->numOfChildren > 0)
        {
            __dealStmt(stmt->children[0], 0);
        }
        break;
    }
    case FOR_COND_STMT:
    { /**
       * FOR_COND_STMT
       * --Exp (?)
       */
        if (stmt->numOfChildren > 0)
        {
            __dealStmt(stmt->children[0], 0);
        }
        break;
    }
    case IF:
    { /**
       * IF
       * --Exp
       * --STMTS
       * --ELSE (?)
       */
        __dealStmt(stmt->children[0], 0);
        __dealStmts(stmt->children[1]);
        if (stmt->numOfChildren > 2)
        {
            // ELSE
            __dealStmt(stmt->children[2], 0);
        }
        break;
    }
    case ELSE:
    { /**
       * ELSE
       * --STMTS
       */
        __dealStmts(stmt->children[0]);
        break;
    }
    case WHILE:
    { /**
       * WHILE
       * --Exp
       * --STMTS
       */
        __dealStmt(stmt->children[0], 0);
        __dealStmts(stmt->children[1]);
        break;
    }
    default:;
    }
}

void generateCode(Node *node)
{
    /**
     * Process `prog` to `middle code` as well as code `static` and `dynamic` check
     */
    __dealStmts(node);
}

void deleteCode(Code *code)
{
    if (code->arg1 != NULL)
        free(code->arg1);
    if (code->arg2 != NULL)
        free(code->arg2);
    free(code);
}

void deleteCodeManager()
{
    for (int i = 0; i < manager->size; i++)
        deleteCode(manager->codeList[i]);
}

void printCode(Code *code)
{
    printf("(%4d) < %2d , %10s , %10s >\n", code->line, code->op, code->arg1, code->arg2);
}

void printCodeManager()
{
    printf("\033[35m(%4s) < %2s , %10s , %10s >\033[0m\n", "line", "op", "arg1", "arg2");
    for (int i = 0; i < manager->size; i++)
        printCode(manager->codeList[i]);
}