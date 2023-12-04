#include <node.h>
#include <ext.h>

Node *createNode(int type, char *val, int line, int level, int numOfChildren, ...)
{
    // create node
    Node *node = (Node *)malloc(sizeof(Node));

    // set node type
    node->type = type;

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
    // set line
    node->line = line;

    node->level = level;

    // set default
    node->code = NULL;
    node->parent = NULL;

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
    // assign

    for (int i = 0; i < node->numOfChildren; i++)
        children[i + 1] = node->children[i];

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
        children[i] = node->children[i];

    // append
    children[node->numOfChildren] = child;

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
        children[i] = __extern->children[i];

    // assign
    for (int i = 0; i < node->numOfChildren; i++)
        children[__extern->numOfChildren + i] = node->children[i];

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
        children[__extern->numOfChildren] = node->children[i];

    // append
    for (int i = 0; i < __extern->numOfChildren; i++)
        children[node->numOfChildren + i] = __extern->children[i];
    
    // free old
    free(node->children);
    free(__extern->children);
    // assign
    node->children = children;

    // ++
    node->numOfChildren += __extern->numOfChildren;
}

void printNode(Node *node, int depth)
{
    for (int i = 0; i <= depth - 1; i++)
        printf("   ");
    printf("└--");
    switch (node->type)
    {

    // key word
    case KW_CONST:
        printf("KEY WORK:%s (%d)", "const", node->line);
        break;
    case KW_EXTERN:
        printf("KEY WORK:%s (%d)", "extern", node->line);
        break;
    case KW_INT:
        printf("KEY WORK:%s (%d)", "int", node->line);
        break;
    case KW_FLOAT:
        printf("KEY WORK:%s (%d)", "float", node->line);
        break;
    case KW_CHAR:
        printf("KEY WORK:%s (%d)", "char", node->line);
        break;
    case KW_VOID:
        printf("KEY WORK:%s (%d)", "void", node->line);
        break;
    case KW_RETURN:
        printf("KEY WORK:%s (%d)", "return", node->line);
        break;
    case KW_IF:
        printf("KEY WORK:%s (%d)", "if", node->line);
        break;
    case KW_ELSE:
        printf("KEY WORK:%s (%d)", "else", node->line);
        break;
    case KW_WHILE:
        printf("KEY WORK:%s (%d)", "while", node->line);
        break;
    case KW_FOR:
        printf("KEY WORK:%s (%d)", "for", node->line);
        break;
    case KW_BREAK:
        printf("KEY WORK:%s (%d)", "break", node->line);
        break;
    case KW_CONTINUE:
        printf("KEY WORK:%s (%d)", "continue", node->line);
        break;
    case KW_TYPEDEF:
        printf("KEY WORK:%s (%d)", "typedef", node->line);
        break;
    case KW_STRUCT:
        printf("KEY WORK:%s (%d)", "struct", node->line);
        break;

    // variable type
    case INT:
        printf("TYPE:%s, VALUE:%s (%d)", "int", node->val, node->line);
        break;
    case FLOAT:
    case OCT:
    case HEX:
        printf("TYPE:%s, VALUE:%s (%d)", "float", node->val, node->line);
        break;
    case CHAR:
        printf("TYPE:%s, VALUE:%s (%d)", "char", node->val, node->line);
        break;
    case STRING:
        printf("TYPE:%s, VALUE:%s (%d)", "string", node->val, node->line);
        break;

    // identify
    case ID:
        printf("IDENTITY:%s (%d)", node->val, node->line);
        break;

    // pretreatment key word
    case INCLUDE:
        printf("PRETREATMENT:%s (%d)", "include", node->line);
        break;
    case DEFINE:
        printf("PRETREATMENT:%s (%d)", "define", node->line);
        break;

    // program
    case PROGRAM:
        printf("PROGRAM (%d)", node->line);
        break;

    // statments
    case STMTS:
        printf("STATMENTS (%d)", node->line);
        break;

    // statment
    case VAR_DEC_STMT:
        printf("VARIABLE DECLARATION STATMENT (%d)", node->line);
        break;
    case VAR_DEF_STMT:
        printf("VARIABLE DEFINATION STATMENT (%d)", node->line);
        break;
    case FUNC_DEC_STMT:
        printf("FUNCTION DECLARATION STATMENT (%d)", node->line);
        break;
    case FUNC_DEF_STMT:
        printf("FUNCTION DEFINATION STATMENT (%d)", node->line);
        break;
    case STMT:
        printf("STATMENT (%d)", node->line);
        break;

    // declare
    case VAR_DEC:
        printf("VARIABLE DECLARATION (%d)", node->line);
        break;
    case ARG_DEC: 
        printf("ARGUMENT DECLARATION (%d)", node->line);
        break;

    // defination
    case VAR_DEF:
        printf("VARIABLE DEFINATION (%d)", node->line);
        break;
    case INITIALIZER_LIST:
        printf("INITIALIZER LIST (%d)", node->line);
        break;

    case MODIFIER:
        printf("MODIFIER (%d)", node->line);
        break;

    // symbol (2 expression)
    case ASSIGN:
        printf("ASSIGN (%d)", node->line);
        break;
    case PLUS:
        printf("PLUS (%d)", node->line);
        break;
    case MINUS:
        printf("MINUS (%d)", node->line);
        break;
    case MULTIPLY:
        printf("MULTIPLY (%d)", node->line);
        break;
    case DIV:
        printf("DIVIDER (%d)", node->line);
        break;
    case DELIVERY:
        printf("DELIVERY (%d)", node->line);
        break;
    case GREATER:
        printf("GREATER (%d)", node->line);
        break;
    case SMALLER:
        printf("SMALLER (%d)", node->line);
        break;
    case GREATER_EQUAL:
        printf("GREATER EQUAL (%d)", node->line);
        break;
    case SMALLER_EQUAL:
        printf("SMALLER EQUAL (%d)", node->line);
        break;
    case EQUAL:
        printf("EQUAL (%d)", node->line);
        break;
    case NOT_EQUAL:
        printf("NOT EQUAL (%d)", node->line);
        break;
    case AND:
        printf("AND (%d)", node->line);
        break;
    case OR:
        printf("OR (%d)", node->line);
        break;
    // symbol (1 expression)
    case FDPLUS:
        printf("FDPLUS (%d)", node->line);
        break;
    case BDPLUS:
        printf("BPLUS (%d)", node->line);
        break;
    case FDMINUS:
        printf("FMINUS (%d)", node->line);
        break;
    case BDMINUS:
        printf("BMINUS (%d)", node->line);
        break;
    case NOT:
        printf("NOT (%d)", node->line);
        break;
    case DOT:
        printf("DOT (%d)", node->line);
        break;
    case POINTER:
        printf("POINTER (%d)", node->line);
        break;
    case ARG:
        printf("ARGUMENT (%d)", node->line);
        break;
    case FUNC_CALL:
        printf("FUNCTION CALL (%d)", node->line);
        break;

    // if else if else
    case IF:
        printf("IF (%d)", node->line);
        break;
    case ELSE:
        printf("ELSE (%d)", node->line);
        break;
    
    // while
    case WHILE:
        printf("WHILE (%d)", node->line);
        break;
    case FOR:
        printf("FOR (%d)", node->line);
        break;
    case FOR_START_STMT:
        printf("FOR START STATMENT (%d)", node->line);
        break;
    case FOR_COND_STMT:
        printf("FOR CONDITION STATMENT (%d)", node->line);
        break;
    case FOR_ITER_EXP:
        printf("FOR ITERATIVE EXPRESSION (%d)", node->line);
        break;

    // return
    case RETURN:
        printf("RETURN (%d)", node->line);
        break;

    default:
        break;
    }
    printf("\n");
    for (int i = 0; i < node->numOfChildren; i++)
        printNode(node->children[i], depth + 1);
}

void deleteNode(Node *node)
{
    for (int i = 0; i < node->numOfChildren; i++)
        deleteNode(node->children[i]);
    if (node->val != NULL)
        free(node->val);
    if (node->code != NULL)
        free(node->code);
    if (node->children != NULL)
        free(node->children);
}