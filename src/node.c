#include <node.h>
#include <ext.h>

Node *createNode(int type, char *val, int line, int level, int numOfChildren, ...)
{
    // create node
    Node *node = (Node *)malloc(sizeof(Node));

    // set node type
    node->type = type;

    // set lexeme
    node->lexeme = NULL;

    // set modifier
    node->valModifier = NULL;

    // set valType
    node->valType = NULL;

    // set complex type
    node->complexType = NULL;

    // set node val
    if (val != NULL)
    {
        node->val = (char *)malloc((strlen(val) + 1) * sizeof(char));
        strcpy(node->val, val);
    }
    else
    {
        node->val = NULL;
    }

    // set ptrStar
    node->ptrStar = 0;

    // set initializer
    node->initializer = NULL;

    // set dim
    node->arrayDim = NULL;

    // set line
    node->line = line;

    node->level = level;

    // set default
    node->parent = NULL;
    node->width = 0;

    // set children
    node->numOfChildren = numOfChildren;
    if (numOfChildren != 0)
    {
        node->children = (Node **)malloc(sizeof(Node *) * numOfChildren);
        // set children
        va_list args = NULL;
        va_start(args, numOfChildren);
        for (int i = 0; i < numOfChildren; i++)
        {
            Node *child = va_arg(args, Node *);
            node->children[i] = child;
            child->parent = node;
        }
        va_end(args);
    }
    else
    {
        node->children = NULL;
    }
    return node;
}

void prependNode(Node *node, Node *child)
{
    // allocate new
    Node **children = (Node **)malloc(sizeof(Node *) * (node->numOfChildren + 1));

    // prepend
    children[0] = child;
    child->parent = node;
    // assign

    for (int i = 0; i < node->numOfChildren; i++)
    {
        children[i + 1] = node->children[i];
        children[i]->parent = node;
    }
    // free old
    free(node->children);

    // assign
    node->children = children;
    node->line = child->line;
    // ++
    node->numOfChildren++;
}

void appendNode(Node *node, Node *child)
{
    // allocate new
    Node **children = (Node **)malloc(sizeof(Node *) * (node->numOfChildren + 1));

    // assign

    for (int i = 0; i < node->numOfChildren; i++)
    {
        children[i] = node->children[i];
        children[i]->parent = node;
    }
    // append
    children[node->numOfChildren] = child;
    child->parent = node;
    // free old
    free(node->children);

    // assign
    node->children = children;

    // ++
    node->numOfChildren++;
}

void prependNodes(Node *node, Node *__extern)
{
    // allocate new
    Node **children = (Node **)malloc(sizeof(Node *) * (node->numOfChildren + __extern->numOfChildren));

    // prepend
    for (int i = 0; i < __extern->numOfChildren; i++)
    {
        children[i] = __extern->children[i];
        children[i]->parent = node;
    }

    // assign
    for (int i = 0; i < node->numOfChildren; i++)
    {
        children[__extern->numOfChildren + i] = node->children[i];
        children[__extern->numOfChildren + i]->parent = node;
    }

    // free old
    free(node->children);
    free(__extern->children);
    // assign
    node->children = children;
    node->line = __extern->line;
    // ++
    node->numOfChildren += __extern->numOfChildren;
}

void appendNodes(Node *node, Node *__extern)
{
    // allocate new
    Node **children = (Node **)malloc(sizeof(Node *) * (node->numOfChildren + __extern->numOfChildren));

    // assign
    for (int i = 0; i < node->numOfChildren; i++)
    {
        children[i] = node->children[i];
        children[i]->parent = node;
    }

    // append
    for (int i = 0; i < __extern->numOfChildren; i++)
    {
        children[node->numOfChildren + i] = __extern->children[i];
        children[node->numOfChildren + i]->parent = node;
    }

    // free old
    free(node->children);
    free(__extern->children);
    // assign
    node->children = children;

    // ++
    node->numOfChildren += __extern->numOfChildren;
}

void removeNode(Node *node, int pos)
{
    if (pos == -1)
        return;
    free(node->children[pos]);
    for (int i = pos; i < node->numOfChildren - 1; i++)
        node->children[i] = node->children[i + 1];
    node->numOfChildren--;
}

void __printPrefix(char *prefix, int depth)
{
    for (int i = 0; i <= depth - 1; i++)
        printf("   ");
    printf("|");
    printf("\n");
    for (int i = 0; i <= depth - 1; i++)
        printf("   ");
    printf(prefix);
}

void printNode(Node *node, int depth, char *prefix)
{
    if (prefix == NULL)
        __printPrefix("└--", depth);
    else
        __printPrefix(prefix, depth);

    switch (node->type)
    {

    // key word
    case KW_RETURN:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "return", node->line);
        break;
    case KW_IF:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "if", node->line);
        break;
    case KW_ELSE:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "else", node->line);
        break;
    case KW_WHILE:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "while", node->line);
        break;
    case KW_FOR:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "for", node->line);
        break;
    case KW_BREAK:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "break", node->line);
        break;
    case KW_CONTINUE:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "continue", node->line);
        break;
    case KW_TYPEDEF:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "typedef", node->line);
        break;
    case KW_STRUCT:
        printf("KEY WORD:%s, IDENTITY:%s \033[32m(%d)\033[0m", "struct", node->val, node->line);
        break;

    // value
    case INT:
        printf("TYPE:%s, VALUE:%s \033[32m(%d)\033[0m", "int", node->val, node->line);
        break;
    case FLOAT:
    case OCT:
    case HEX:
        printf("TYPE:%s, VALUE:%s \033[32m(%d)\033[0m", "float", node->val, node->line);
        break;
    case CHAR:
        printf("TYPE:%s, VALUE:%s \033[32m(%d)\033[0m", "char", node->val, node->line);
        break;
    case STRING:
        printf("TYPE:%s, VALUE:%s \033[32m(%d)\033[0m", "string", node->val, node->line);
        break;

    // identify
    case ID:
        printf("IDENTITY:%s \033[32m(%d)\033[0m", node->val, node->line);
        break;

    // pretreatment key word
    case INCLUDE:
        printf("PRETREATMENT:%s \033[32m(%d)\033[0m", "include", node->line);
        break;
    case DEFINE:
        printf("PRETREATMENT:%s \033[32m(%d)\033[0m", "define", node->line);
        break;

    // program
    case PROGRAM:
        printf("PROGRAM \033[32m(%d)\033[0m", node->line);
        break;

    // statments
    case STMTS:
        printf("STATMENTS \033[32m(%d)\033[0m", node->line);
        break;

    // statment
    case STMT:
        printf("STATMENT \033[32m(%d)\033[0m", node->line);
        break;

    // declare
    case VAR_DEC:
        printf("VARIABLE DECLARATION \033[32m(%d)\033[0m", node->line);
        break;
    case FUNC_DEC:
        printf("FUNCTION DECLARATION \033[32m(%d)\033[0m", node->line);
        break;
    case ARG_DEC:
        printf("ARGUMENT DECLARATION \033[32m(%d)\033[0m", node->line);
        break;

    // defination
    case VAR_DEF:
        printf("VARIABLE DEFINATION \033[32m(%d)\033[0m", node->line);
        break;
    case INITIALIZER:
        printf("INITIALIZER \033[32m(%d)\033[0m", node->line);
        break;
    case BRACE_INITIALIZER:
        printf("BRACE INITIALIZER \033[32m(%d)\033[0m", node->line);
        break;
    case FUNC_DEF:
        printf("FUNCTION DEFINATION \033[32m(%d)\033[0m", node->line);
        break;
    case STRUCT_DEF:
        printf("STRUCT DEFINATION \033[32m(%d)\033[0m", node->line);
        printf("\n");
        __printPrefix("*--", depth + 1);
        printf("IDENTITY:%s", node->lexeme);
        break;

    // variable
    case VAR:
    {
        printf("VARIABLE \033[32m(%d)\033[0m", node->line);
        printf("\n");
        __printPrefix("*--", depth + 1);
        printf("LEXEME:%s\n", node->lexeme);
        __printPrefix("*--", depth + 1);
        printf("MODIFIER:%s\n", node->valModifier);
        __printPrefix("*--", depth + 1);
        printf("TYPE:%s\n", node->valType);
        __printPrefix("*--", depth + 1);
        printf("COMPLEX TYPE:%s\n", node->complexType);
        __printPrefix("*--", depth + 1);
        printf("STAR:%d\n", node->ptrStar);
        if (node->arrayDim != NULL)
            printNode(node->arrayDim, depth + 1, "*--");
        if (node->initializer != NULL)
            printNode(node->initializer, depth + 1, "*--");
        break;
    }

    // dimension
    case ARRAY_DIM:
        printf("ARRAY DIMENSION:%d \033[32m(%d)\033[0m", node->val, node->line);
        printf("\n");
        if (node->arrayDim != NULL)
            printNode(node->arrayDim, depth + 1, "*--");
        break;

    // stars
    case STAR:
        printf("STAR: %s \033[32m(%d)\033[0m", node->val, node->line);
        break;

    // symbol (2 expression)
    case ASSIGN:
        printf("ASSIGN \033[32m(%d)\033[0m", node->line);
        break;
    case PLUS:
        printf("PLUS \033[32m(%d)\033[0m", node->line);
        break;
    case MINUS:
        printf("MINUS \033[32m(%d)\033[0m", node->line);
        break;
    case MULTIPLY:
        printf("MULTIPLY \033[32m(%d)\033[0m", node->line);
        break;
    case DIV:
        printf("DIVIDER \033[32m(%d)\033[0m", node->line);
        break;
    case DELIVERY:
        printf("DELIVERY \033[32m(%d)\033[0m", node->line);
        break;
    case GREATER:
        printf("GREATER \033[32m(%d)\033[0m", node->line);
        break;
    case SMALLER:
        printf("SMALLER \033[32m(%d)\033[0m", node->line);
        break;
    case GREATER_EQUAL:
        printf("GREATER EQUAL \033[32m(%d)\033[0m", node->line);
        break;
    case SMALLER_EQUAL:
        printf("SMALLER EQUAL \033[32m(%d)\033[0m", node->line);
        break;
    case EQUAL:
        printf("EQUAL \033[32m(%d)\033[0m", node->line);
        break;
    case NOT_EQUAL:
        printf("NOT EQUAL \033[32m(%d)\033[0m", node->line);
        break;
    case AND:
        printf("AND \033[32m(%d)\033[0m", node->line);
        break;
    case OR:
        printf("OR \033[32m(%d)\033[0m", node->line);
        break;
    // symbol (1 expression)
    case FDPLUS:
        printf("FDPLUS \033[32m(%d)\033[0m", node->line);
        break;
    case BDPLUS:
        printf("BPLUS \033[32m(%d)\033[0m", node->line);
        break;
    case FDMINUS:
        printf("FMINUS \033[32m(%d)\033[0m", node->line);
        break;
    case BDMINUS:
        printf("BMINUS \033[32m(%d)\033[0m", node->line);
        break;
    case NOT:
        printf("NOT \033[32m(%d)\033[0m", node->line);
        break;
    case DOT:
        printf("DOT \033[32m(%d)\033[0m", node->line);
        break;
    case POINTER:
        printf("POINTER \033[32m(%d)\033[0m", node->line);
        break;
    case ARG:
        printf("ARGUMENT \033[32m(%d)\033[0m", node->line);
        break;
    case FUNC_CALL:
        printf("FUNCTION CALL \033[32m(%d)\033[0m", node->line);
        break;
    case GET_ADDR:
        printf("GET ADDR \033[32m(%d)\033[0m", node->line);
        break;
    case GET_DATA:
        printf("GET DATA \033[32m(%d)\033[0m", node->line);
        break;
    case TRANSFORM:
        printf("TRANSFORM \033[32m(%d)\033[0m", node->line);
        printf("\n");
        __printPrefix("*--", depth + 1);
        printf("TYPE:%s\n", node->valType);
        __printPrefix("*--", depth + 1);
        printf("COMPLEX TYPE:%s\n", node->complexType);
        break;

    // if else if else
    case IF:
        printf("IF \033[32m(%d)\033[0m", node->line);
        break;
    case ELSE:
        printf("ELSE \033[32m(%d)\033[0m", node->line);
        break;

    // while
    case WHILE:
        printf("WHILE \033[32m(%d)\033[0m", node->line);
        break;
    case FOR:
        printf("FOR \033[32m(%d)\033[0m", node->line);
        break;
    case FOR_START_STMT:
        printf("FOR START STATMENT \033[32m(%d)\033[0m", node->line);
        break;
    case FOR_COND_STMT:
        printf("FOR CONDITION STATMENT \033[32m(%d)\033[0m", node->line);
        break;
    case FOR_ITER_EXP:
        printf("FOR ITERATIVE EXPRESSION \033[32m(%d)\033[0m", node->line);
        break;

    // return
    case RETURN:
        printf("RETURN \033[32m(%d)\033[0m", node->line);
        break;

    default:
        break;
    }
    printf("\n");
    for (int i = 0; i < node->numOfChildren; i++)
        printNode(node->children[i], depth + 1, NULL);
}

void deleteNode(Node *node)
{
    for (int i = 0; i < node->numOfChildren; i++)
        deleteNode(node->children[i]);
    if (node->val != NULL)
    {
        free(node->val);
        node->val = NULL;
    }
    if (node->valModifier != NULL)
    {
        free(node->valModifier);
        node->valModifier = NULL;
    }
    if (node->lexeme != NULL)
    {
        free(node->lexeme);
        node->lexeme = NULL;
    }
    if (node->valType != NULL)
    {
        free(node->valType);
        node->valType = NULL;
    }
    if (node->children != NULL)
        free(node->children);
    if (node->initializer != NULL)
    {
        deleteNode(node->initializer);
    }
    if (node->arrayDim != NULL)
    {
        deleteNode(node->arrayDim);
    }
}

void __analysisVar(Node *node, Node *specifier)
{
    // node
    /**
     */
    switch (node->type)
    {
    case VAR:
    {
        // add value modifier
        node->valModifier = specifier->valModifier;
        // add value type
        node->valType = specifier->valType;

        // assign type
        node->symbol->type = node->valType;
        node->symbol->complexType = node->complexType;
        break;
    }
    default:;
    }
    for (int i = 0; i < node->numOfChildren; i++)
        __analysisVar(node->children[i], specifier);
}

void analysisVar(Node *node, Node *specifier)
{
    __analysisVar(node, specifier);
    free(specifier);
}
