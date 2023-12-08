#include <code.h>

// private method
int __calculateSpanDim(Node *dimNode, int width, int initializerSize, int depth)
{
    int spanDim = atoi(dimNode->val);
    if (spanDim == 0)
    {
        // [] empty
        if (dimNode->arrayDim != NULL)
        {
            // [][] empty
            error(dimNode->line, ARRAY_INCOMPLETED);
        }
        if (initializerSize == 0)
            return 1;
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

void __dealVar(Node *var, int isGlobal, int isDeclare)
{
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
        // 区分定义、声明
        if (isDeclare == 1)
        {
            // 声明
            if (var->symbol->duplicate == 1)
            {
                // 重复, 移除 var 声明
                deleteSymbol(var->runtime, var->symbol->pos);
            }
            else
            {
                // 不重复, 计算偏移量
                __getOffset(var);
                var->symbol->isDefination = 0;
            }
        }
        else
        {
            // 定义
            if (var->symbol->duplicate == 1)
            {
                // 重复, 向前查找是否已定义
                int hasDefinated = lookAheadDefination(var->runtime, var->symbol);
                if (hasDefinated)
                {
                    error(var->line, VARIABLE_REDEFINED, var->lexeme);
                }
                deleteSymbol(var->runtime, var->symbol->pos);
            }
            else
            {
                // 不重复
                __getOffset(var);
                var->symbol->isDefination = 1;
            }
        }
    }
    else
    {
        // 不区分定义、声明
        if (var->symbol->duplicate == 1)
        {
            // 找到重复定义
            deleteSymbol(var->runtime, var->symbol->pos);
            error(var->line, VARIABLE_REDECLARED, var->lexeme);
        }
        else
        {
            // 设置定义
            __getOffset(var);
        }
    }
    for (int i = 0; i < var->numOfChildren; i++)
    {
        __dealVar(var->children[i], isGlobal, isDeclare);
    }
}

void __dealStmt(Node *stmt, int isGlobal)
{
    /**
     * 有重复，向前找, 有定义则报错，放弃该定义。有声明则放弃该定义
     * 无重复，pass
     * 设置该位置symbol为defination
     * 计算offset
     */
    switch (stmt->type)
    {
    case VAR_DEF:
        /* code */
        break;
    case FUNC_DEF:
        break;
    case STRUCT_DEF:
        break;
    case VAR_DEC:
        /* code */
        break;
    case FUNC_DEC:
        break;
    case FOR:
        break;
    case IF:
        break;
    case WHILE:
        break;
    default:;
    }
}

void generateCode(Node *node)
{
    /**
     * node can be -> program, stmts, exp...
     */
    switch (node->type)
    {
    case PROGRAM:
        for (int i = 0; i < node->numOfChildren; i++)
        {
            __dealStmt(node->children[i], 1);
        }
        break;
    case STMTS:
        for (int i = 0; i < node->numOfChildren; i++)
        {
            __dealStmt(node->children[i], 0);
        }
        break;
    default:
        break;
    }
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