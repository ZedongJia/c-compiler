#include <code.h>

void printOp(int op)
{
    switch (op)
    {
    case C_PLUS:
        printf("%5s", "+");
        break;
    case C_MINUS:
        printf("%5s", "-");
        break;
    case C_MULIPLY:
        printf("%5s", "*");
        break;
    case C_DIVIDER:
        printf("%5s", "/");
        break;
    case C_DELIVERY:
        printf("%5s", "%");
        break;
    case C_NOT:
        printf("%5s", "!");
        break;
    case C_AND:
        printf("%5s", "&&");
        break;
    case C_OR:
        printf("%5s", "||");
        break;
    case C_GREATER:
        printf("%5s", ">");
        break;
    case C_SMALLER:
        printf("%5s", "<");
        break;
    case C_GREATER_EQUAL:
        printf("%5s", ">=");
        break;
    case C_SMALLER_EQUAL:
        printf("%5s", "<=");
        break;
    case C_EQUAL:
        printf("%5s", "==");
        break;
    case C_NOT_EQUAL:
        printf("%5s", "!=");
        break;
    case C_ASSIGN:
        printf("%5s", "=");
        break;
    case C_INT:
        printf("%5s", "int");
        break;
    case C_FLOAT:
        printf("%5s", "float");
        break;
    case C_CHAR:
        printf("%5s", "char");
        break;
    case C_GET_DATA:
        printf("%5s", "*");
        break;
    case C_GET_ADDR:
        printf("%5s", "&");
        break;
    case C_CALL:
        printf("%5s", "call");
        break;
    case C_PARAM:
        printf("%5s", "param");
        break;
    default:
        break;
    }
}

// ExpVal methods
ExpVal *createExpVal(char *type, char *valType, char *val)
{
    ExpVal *expVal = (ExpVal *)malloc(sizeof(ExpVal));
    expVal->type = type;
    expVal->valType = valType;
    expVal->val = val;
    expVal->complexType = NULL;
    expVal->ptrStar = 0;
    return expVal;
}

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

int addCode(int op, char *arg1, char *arg2)
{
    manager->codeList[manager->line] = createCode(manager->line, op, arg1, arg2);
    manager->line++;
    return manager->line - 1;
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
    default:
    {
        __dealExp(stmt);
    }
    }
}

ExpVal *__dealExp(Node *exp)
{
    switch (exp->type)
    {
        /* base type */
    case INT:
    {
        return createExpVal("int", "int", exp->val);
    }
    case FLOAT:
    {
        return createExpVal("float", "float", exp->val);
    }
    case CHAR:
    {
        return createExpVal("char", "char", exp->val);
    }
    case STRING:
    {
        return createExpVal("string", "string", exp->val);
    }
    case ID:
    {
        ExpVal *expVal = createExpVal("id", NULL, exp->val);
        // normal variable
        Symbol *syb = lookup(exp->runtime, exp->val, 1);
        if (syb == NULL)
        {
            error(exp->line, VARIABLE_NOT_DEFINED, exp->val);
            expVal->valType = "int";
        }
        else
        {
            expVal->complexType = syb->complexType;
            expVal->valType = syb->type;
            expVal->ptrStar = syb->ptr->ptrStar;
        }
        return expVal;
    }
    case TRANSFORM:
    { /**
       * TRANSFORM
       * --*property (valType, ptrStar, complexType)
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        if (strcmp(exp->valType, arg1->valType) != 0)
        {
            // not the same
            if (__dealCast(exp->line, exp->valType, arg1, TRANSFORM_TYPE_ERROR) == 0)
            {
                // ignore transform
                return arg1;
            }
        }
        if (arg1->ptrStar != exp->ptrStar)
        {
            // type ptr not align
            error(exp->line, TRANSFORM_PTR_ERROR, arg1->ptrStar, exp->ptrStar);
            return arg1;
        }
        if (exp->ptrStar != 0)
        {
            // convert to ptr
            int line = addCode(C_POINTER, arg1->val, NULL);
            char *sign = (char *)malloc(sizeof(char) * (8));
            sprintf(sign, "(%d)", line);
            arg1->val = sign;
            arg1->valType = exp->valType;
            arg1->complexType = "ptr";
            return arg1;
        }
        return arg1;
        break;
    }
    case FUNC_CALL:
    { /**
       * FUNC_CALL
       * --ID
       * --Args (?)
       */
        Node *id = exp->children[0];
        Symbol *syb = lookup(id->runtime, id->val, 1);
        if (syb == NULL)
        {
            error(exp->line, FUNCTION_NOT_DEFINED, id->val);
            return createExpVal("int", "int", "0");
        }
        if (exp->numOfChildren > 0)
        {
            Node *args = exp->children[1];
            if (syb->numOfArgs > args->numOfChildren)
            {
                error(exp->line, LESS_ARGUMENTS_ERROR);
            }
            else if (syb->numOfArgs < args->numOfChildren)
            {
                error(exp->line, MORE_ARGUMENTS_ERROR);
            }
            // set argument
            for (int i = 0; i < args->numOfChildren; i++)
            {
                ExpVal *arg = __dealExp(args->children[i]);
                int line = addCode(C_PARAM, arg->val, NULL);
            }
            for (int i = args->numOfChildren; i < syb->numOfArgs; i++)
            {
                int line = addCode(C_PARAM, "0", NULL);
            }
        }
        char *numOfArgs = (char *)malloc(sizeof(char) * 2);
        itoa(syb->numOfArgs, numOfArgs, 10);
        int line = addCode(C_CALL, numOfArgs, id->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *rt = createExpVal("id", syb->type, sign);
        rt->complexType = syb->complexType;
        return rt;
    }
    case ASSIGN:
    { /**
       * ASSIGN
       * --Exp (arg2)
       * --Exp (arg1)
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg2->type, "id") != 0)
        {
            /**
             * Ignore the assign exp
             */
            error(exp->line, ASSIGN_NOT_ALLOW);
            free(arg2);
            return arg1;
        }
        if (arg2->complexType != NULL && arg1->complexType != NULL)
        {
            // not align in complexType
            if (strcmp(arg2->complexType, arg1->complexType) != 0 || arg2->ptrStar != arg1->ptrStar)
            {
                error(exp->line, ASSIGE_COMPLEX_TYPE_ERROR, arg1->ptrStar, arg1->complexType, arg2->ptrStar, arg2->complexType);
                free(arg2);
                return arg1;
            }
        }
        else if (arg2->complexType != NULL && arg1->complexType == NULL)
        {
            error(exp->line, ASSIGE_COMPLEX_TYPE_ERROR, arg1->ptrStar, "ptr", arg2->ptrStar, arg2->complexType);
            free(arg2);
            return arg1;
        }
        else if (arg2->complexType == NULL && arg1->complexType != NULL)
        {
            error(exp->line, ASSIGE_COMPLEX_TYPE_ERROR, arg1->ptrStar, arg1->complexType, arg2->ptrStar, "ptr");
            free(arg2);
            return arg1;
        }
        if (strcmp(arg2->valType, arg1->valType) != 0)
        {
            // process type not align
            if (__dealCast(exp->line, arg2->valType, arg1, ASSIGN_TYPE_ERROR) == 0)
            {
                free(arg2);
                return arg1;
            }
        }
        int line = addCode(C_ASSIGN, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *assignVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg2);
        free(arg1);
        return assignVal;
        break;
    }
    case OR:
    { /**
       * OR
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_OR, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *orVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return orVal;
    }
    case AND:
    { /**
       * AND
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_AND, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *andVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return andVal;
    }

    case NOT_EQUAL:
    { /**
       * NOT_EQUAL
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_NOT_EQUAL, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *notEqualVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return notEqualVal;
    }

    case EQUAL:
    { /**
       * EQUAL
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_EQUAL, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *equalVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return equalVal;
    }

    case SMALLER_EQUAL:
    { /**
       * SMALLER_EQUAL
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_SMALLER_EQUAL, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *smallerEqualVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return smallerEqualVal;
    }

    case SMALLER:
    { /**
       * SMALLER
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_SMALLER, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *smallerVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return smallerVal;
    }

    case GREATER_EQUAL:
    { /**
       * GREATER_EQUAL
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_GREATER_EQUAL, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *greaterEqualVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return greaterEqualVal;
    }

    case GREATER:
    { /**
       * GREATER
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_GREATER, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *greaterVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return greaterVal;
    }

    case MINUS:
    { /**
       * MINUS
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_MINUS, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *minusVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return minusVal;
    }
    case PLUS:
    { /**
       * PLUS
       * --Exp (arg2)
       * --Exp (arg1)
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_PLUS, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *plusVal = createExpVal(arg2->valType, arg2->valType, sign);

        free(arg1);
        free(arg2);
        return plusVal;
    }

    case DELIVERY:
    { /**
       * DELIVERY
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, "float") == 0)
        {
            // is float
            error(exp->line, DELIVERY_TYPE_ERROR, arg1->valType);
        }
        else if (strcmp(arg1->valType, "int") != 0)
        {
            // cast it to `int` type
            __dealCast(exp->line, "int", arg1, OPERATOR_TYPE_ERROR);
        }
        if (strcmp(arg2->valType, "float") == 0)
        {
            // is float
            error(exp->line, DELIVERY_TYPE_ERROR, arg2->valType);
        }
        else if (strcmp(arg2->valType, "int") != 0)
        {
            // cast it to `int` type
            __dealCast(exp->line, "int", arg2, OPERATOR_TYPE_ERROR);
        }
        int line = addCode(C_DELIVERY, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *deliveryVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return deliveryVal;
    }
    case MULTIPLY:
    { /**
       * MULTIPLY
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_MULIPLY, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *multiplyVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return multiplyVal;
    }
    case DIV:
    { /**
       * DIV
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (strcmp(arg1->valType, arg2->valType) != 0)
        {
            // not same
            int arg1Priority = __dealTypePriority(arg1->valType);
            int arg2Priority = __dealTypePriority(arg2->valType);
            if (arg1Priority > arg2Priority)
            {
                __dealCast(exp->line, arg1->valType, arg2, OPERATOR_TYPE_ERROR);
            }
            else
            {
                __dealCast(exp->line, arg2->valType, arg1, OPERATOR_TYPE_ERROR);
            }
        }
        int line = addCode(C_DIVIDER, arg1->val, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        ExpVal *dividerVal = createExpVal(arg2->valType, arg2->valType, sign);
        free(arg1);
        free(arg2);
        return dividerVal;
    }
    case NOT:
    { /**
       * NOT
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_NOT, arg1->val, NULL);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case GET_ADDR:
    { /**
       * GET_ADDR
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_GET_ADDR, arg1->val, NULL);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case GET_DATA:
    { /**
       * GET_DATA
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        if (arg1->complexType == NULL || !strstr(arg1->complexType, "ptr"))
        {
            error(exp->line, GET_DATA_ERROR);
            return arg1;
        }
        int line = addCode(C_GET_DATA, arg1->val, NULL);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case FDMINUS:
    { /**
       * FDMINUS
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_MINUS, "1", arg1->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case BDMINUS:
    { /**
       * BDMINUS
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_MINUS, "1", arg1->val);
        return arg1;
    }
    case BDPLUS:
    { /**
       * BDPLUS
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_PLUS, "1", arg1->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case FDPLUS:
    { /**
       * FDPLUS
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[0]);
        int line = addCode(C_PLUS, "1", arg1->val);
        return arg1;
    }
    case DOT:
    { /**
       * DOT
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        Runtime *runtime = exp->children[0]->runtime;
        Symbol *syb = lookup(runtime, arg1->val, 0);
        if (arg2->complexType != NULL && strstr(arg2->complexType, "ptr"))
        {
            error(exp->line, DOT_ERROR);
            return createExpVal("int", "int", "0");
        }
        if (!syb)
        {
            // not found member
            error(exp->line, MEMBER_NOT_FOUND, arg1->val, exp->runtime->namespace);
            return createExpVal("int", "int", "0");
        }
        char *offset = (char *)malloc(sizeof(char) * 10);
        itoa(syb->offset - syb->ptr->width, offset, 10);
        int line = addCode(C_PLUS, offset, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    case POINTER:
    { /**
       * POINTER
       * --Exp
       * --Exp
       */
        ExpVal *arg1 = __dealExp(exp->children[1]);
        ExpVal *arg2 = __dealExp(exp->children[0]);
        if (arg2->complexType == NULL || !strstr(arg2->complexType, "ptr"))
        {
            error(exp->line, POINTER_ERROR);
            return createExpVal("int", "int", "0");
        }
        Runtime *runtime = exp->children[0]->runtime;
        Symbol *syb = lookup(runtime, arg1->val, 0);
        if (!syb)
        {
            // not found member
            error(exp->line, MEMBER_NOT_FOUND, arg1->val, exp->runtime->namespace);
            return createExpVal("int", "int", "0");
        }
        char *offset = (char *)malloc(sizeof(char) * 10);
        itoa(syb->offset - syb->ptr->width, offset, 10);
        int line = addCode(C_PLUS, offset, arg2->val);
        char *sign = (char *)malloc(sizeof(char) * (8));
        sprintf(sign, "(%d)", line);
        arg1->val = sign;
        return arg1;
    }
    default:
        break;
    }
}

int __dealCast(int line, char *valType, ExpVal *tra, char *errorMsg)
{
    // process type not correct
    /**
     * int
     * float
     * char
     * string
     * struct_
     * 5 cases
     */
    if (strstr(valType, "struct_"))
    {
        // not belong to the same structure
        error(line, errorMsg, tra->valType, valType);
        return 0;
    }
    else if (strstr(valType, "int"))
    {
        if (strstr(tra->valType, "float") || strstr(tra->valType, "char"))
        {
            // type cast to int
            int line = addCode(C_INT, tra->val, NULL);
            char *sign = (char *)malloc(sizeof(char) * (8));
            sprintf(sign, "(%d)", line);
            tra->val = sign;
            tra->valType = valType;
        }
        else
        {
            // can not cast
            error(line, errorMsg, tra->valType, valType);
            return 0;
        }
    }
    else if (strstr(valType, "float"))
    {
        if (strstr(tra->valType, "int") || strstr(tra->valType, "char"))
        {
            // type cast to float
            int line = addCode(C_FLOAT, tra->val, NULL);
            char *sign = (char *)malloc(sizeof(char) * (8));
            sprintf(sign, "(%d)", line);
            tra->val = sign;
            tra->valType = valType;
        }
        else
        {
            // can not cast
            error(line, errorMsg, tra->valType, valType);
            return 0;
        }
    }
    else if (strstr(valType, "char"))
    {
        if (strstr(tra->valType, "int") || strstr(tra->valType, "float"))
        {
            // type cast to char
            int line = addCode(C_CHAR, tra->val, NULL);
            char *sign = (char *)malloc(sizeof(char) * (8));
            sprintf(sign, "(%d)", line);
            tra->val = sign;
            tra->valType = valType;
        }
        else
        {
            // can not cast
            error(line, errorMsg, tra->valType, valType);
            return 0;
        }
    }
    else
    {
        // can not cast
        error(line, errorMsg, tra->valType, valType);
        return 0;
    }
    return 1;
}

int __dealTypePriority(char *valType)
{
    if (strstr(valType, "int"))
    {
        return 1;
    }
    else if (strstr(valType, "float"))
    {
        return 2;
    }
    else if (strstr(valType, "char"))
    {
        return 0;
    }
    else
    {
        return 0;
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
    for (int i = 0; i < manager->line; i++)
        deleteCode(manager->codeList[i]);
}

void printCode(Code *code)
{
    printf("(%4d) < ", code->line);
    printOp(code->op);
    printf(" , %10s , %10s >\n", code->arg1, code->arg2);
}

void printCodeManager()
{
    printf("\033[35m(%4s) < %5s , %10s , %10s >\033[0m\n", "line", "op", "arg1", "arg2");
    for (int i = 0; i < manager->line; i++)
        printCode(manager->codeList[i]);
}
