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
        children[__extern->numOfChildren] = node->children[i];
        children[__extern->numOfChildren]->parent = node;
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

void printNode(Node *node, int depth)
{
    for (int i = 0; i <= depth - 1; i++)
        printf("   ");
    printf("|");
    printf("\n");
    for (int i = 0; i <= depth - 1; i++)
        printf("   ");
    printf("└--");
    switch (node->type)
    {

    // key word
    case KW_CONST:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "const", node->line);
        break;
    case KW_EXTERN:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "extern", node->line);
        break;
    case KW_INT:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "int", node->line);
        break;
    case KW_FLOAT:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "float", node->line);
        break;
    case KW_CHAR:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "char", node->line);
        break;
    case KW_VOID:
        printf("KEY WORD:%s \033[32m(%d)\033[0m", "void", node->line);
        break;
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

    // variable type
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

    // type specifier
    case SPECIFIER:
        printf("SPECIFIER \033[32m(%d)\033[0m", node->line);
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
        break;

    case MODIFIER:
        printf("MODIFIER \033[32m(%d)\033[0m", node->line);
        break;
    // variable
    case VAR:
        printf("VARIABLE \033[32m(%d)\033[0m", node->line);
        break;
    case VAR_ARRAY:
        printf("VARIABLE ARRAY \033[32m(%d)\033[0m", node->line);
        break;
    case VAR_POINTER:
        printf("VARIABLE POINTER \033[32m(%d)\033[0m", node->line);
        break;
    case VAR_POINTER_ARRAY:
        printf("VARIABLE POINTER ARRAY \033[32m(%d)\033[0m", node->line);
        break;
    case VAR_ARRAY_POINTER:
        printf("VARIABLE ARRAY POINTER \033[32m(%d)\033[0m", node->line);
        break;

    // dimension
    case ARRAY_DIM:
        printf("ARRAY DIMENSION \033[32m(%d)\033[0m", node->line);
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

void addType(Node *node, Node *specifier)
{
    switch (node->type)
    {
    case VAR:
    case VAR_ARRAY:
    case VAR_POINTER:
    case VAR_POINTER_ARRAY:
    case VAR_ARRAY_POINTER:
        prependNode(node, specifier);
        break;
    default:;
    }
    for (int i = 0; i < node->numOfChildren; i++)
        addType(node->children[i], specifier);
}

void syntaxAnalysis(Node *node, char *namespace, int syntaxType)
{
    switch (node->type)
    {
    case FUNC_DEC:
    { /**
       * --FUNC_DEC
       * ----SPECIFIER
       * ----MODIFIER
       * ----ARG_DEC (?)
       */
        lookupAndFillTable(node, namespace, syntaxType);
        if (node->numOfChildren > 2)
        {
            syntaxAnalysis(node->children[2], namespace, syntaxType);
        }
        break;
    }
    case FUNC_DEF:
    { /**
       * --FUNC_DEF
       * ----SPECIFIER
       * ----MODIFIER
       * ----ARG_DEC (?)
       * ----STMTS (?)
       */
        fillTable(node, namespace, node->level);
        if (node->numOfChildren > 2)
        {
            syntaxAnalysis(node->children[2], namespace, syntaxType);
        }
        if (node->numOfChildren > 3)
        {
            syntaxAnalysis(node->children[3], namespace, syntaxType);
        }
        break;
    }
    case VAR_DEF:
        for (int i = 0; i < node->numOfChildren; i++)
            syntaxAnalysis(node->children[i], namespace, DEFINATION);
        break;
    case VAR_DEC:
        for (int i = 0; i < node->numOfChildren; i++)
            syntaxAnalysis(node->children[i], namespace, DECLARE);
        break;
    case VAR:
    case VAR_ARRAY:
    case VAR_POINTER:
    case VAR_POINTER_ARRAY:
    case VAR_ARRAY_POINTER:
    { /**
       * --VAR
       * ----...
       * ----SPECIFIER
       * ----...
       * ----MODIFIER
       * ----...
       */
        if (syntaxType == DECLARE)
        {
            lookupAndFillTable(node, namespace, node->level);
        }
        else
        {
            fillTable(node, namespace, node->level);
        }
        for (int i = 0; i < node->numOfChildren; i++)
        {
            switch (node->children[i]->type)
            {
            case VAR:
            case VAR_ARRAY:
            case VAR_POINTER:
            case VAR_POINTER_ARRAY:
            case VAR_ARRAY_POINTER:
                syntaxAnalysis(node->children[i], namespace, syntaxType);
                break;
            default:
                break;
            }
        }
        break;
    }
    case STRUCT_DEF:
    {
        Node *specifier = node->children[0];
        Node *identity = createNode(ID, specifier->children[1]->val, node->line, node->level, 0);
        Node *temp = createNode(VAR_DEF, NULL, node->line, node->level, 2, specifier, identity);
        fillTable(temp, namespace, node->level);
        if (node->numOfChildren > 1)
        {
            // stmts
            syntaxAnalysis(node->children[1], identity->val, syntaxType);
        }
        if (node->numOfChildren > 2)
        {
            // variable
            syntaxAnalysis(node->children[2], namespace, syntaxType);
        }
        free(identity);
        free(temp);
        break;
    }
    case ARG_DEC:
    { /**
       * need level ++
       * --ARG_DEC
       * ----VAR...
       * ----ARG_DEC (?)
       */
        Node *var = node->children[0];
        lookupAndFillTable(var, namespace, node->level + 1);
        if (node->numOfChildren > 1)
        {
            Node *arg_dec = node->children[1];
            syntaxAnalysis(arg_dec, namespace, syntaxType);
        }
        break;
    }
    case DOT:
    case POINTER:
    {
        Node *id1 = node->children[0];
        Node *id2 = node->children[1];
        syntaxAnalysis(id1, namespace, syntaxType);
        syntaxAnalysis(id2, namespace, syntaxType);
        lookupTable(id1, namespace, node->level);
        char *nnamespace = findNamespace(id1, node->level);
        lookupTable(id2, nnamespace, node->level);
        break;
    }
    default:
    {
        for (int i = 0; i < node->numOfChildren; i++)
            syntaxAnalysis(node->children[i], namespace, syntaxType);
    }
    }
}
