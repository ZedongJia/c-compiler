#include <symbolTable.h>

Symbol *createSymbol(char *id, int type, char *alias, char *namespace, int modifier, int symbolType, int level)
{
    Symbol *syb = (Symbol *)malloc(sizeof(Symbol));
    syb->id = id;
    syb->type = type;
    syb->alias = alias;
    syb->namespace = namespace;
    syb->modifier = modifier;
    syb->symbolType = symbolType;
    syb->level = level;
}

void lookupTable(Node *identity, char *namespace, int level)
{
    /**
     * for use case
     */
    int hasFound = 0;
    if (strcmp(namespace, "default") == 0)
    {
        // default search
        int upper = level;
        for (int i = table.numOfSymbol - 1; i >= 0; i--)
        {
            if (upper < table.symbols[i]->level)
            {
                break;
            }
            else if (upper > table.symbols[i]->level)
            {
                upper = table.symbols[i]->level;
            }
            if (strcmp(table.symbols[i]->id, identity->val) == 0)
            {
                hasFound = 1;
                break;
            }
        }
    }
    else
    {
        for (int i = table.numOfSymbol - 1; i >= 0; i--)
        {
            if (strcmp(table.symbols[i]->namespace, namespace) != 0)
            {
                // not in same namespace, skip
                continue;
            }
            if (strcmp(table.symbols[i]->id, identity->val) == 0)
            {
                // found !
                hasFound = 1;
                break;
            }
        }
    }
    if (hasFound == 0)
    {
        error(identity->line, "variable %s has not been declared or defined!", identity->val);
    }
}

void lookupAndFillTable(Node *node, char *namespace, int level)
{
    /**
     * for declare
     * -SPECIFIER
     * --MODIFIER
     * --KEY WORD : struct,int...
     * -IDENTITY
     *
     * if not exists set, else pass
     */
    Node *specifier;
    Node *identity;
    for (int i = 0; i < node->numOfChildren; i++)
    {
        switch (node->children[i]->type)
        {
        case SPECIFIER:
            specifier = node->children[i];
            break;
        case ID:
            identity = node->children[i];
            break;
        default:
            break;
        }
    }
    Node *mNode = specifier->children[0]; // MODIFIER
    Node *tNode = specifier->children[1]; // KEY WORD
    int modifier;
    int type;
    char *alias = "undefined";
    if (mNode->numOfChildren != 0)
    {
        modifier = mNode->children[0]->type;
    }
    type = tNode->type;
    if (type == KW_STRUCT)
    {
        alias = tNode->val;
    }
    int hasFound = 0;
    for (int i = table.numOfSymbol - 1; (i >= 0) && (level == table.symbols[i]->level); i--)
    {
        if (strcmp(table.symbols[i]->id, identity->val) == 0)
        {
            hasFound = 1;
            break;
        }
    }
    if (hasFound == 0)
    {
        // not found
        table.symbols[table.numOfSymbol] = createSymbol(identity->val, type, alias, namespace, modifier, DECLARE, level);
        table.numOfSymbol++;
    }
}

void fillTable(Node *node, char *namespace, int level)
{
    /**
     * for defination
     */
    Node *specifier;
    Node *identity;
    for (int i = 0; i < node->numOfChildren; i++)
    {
        switch (node->children[i]->type)
        {
        case SPECIFIER:
            specifier = node->children[i];
            break;
        case ID:
            identity = node->children[i];
            break;
        default:
            break;
        }
    }
    Node *mNode = specifier->children[0]; // MODIFIER
    Node *tNode = specifier->children[1]; // KEY WORD
    int modifier;
    int type;
    char *alias = "undefined";
    if (mNode->numOfChildren != 0)
    {
        modifier = mNode->children[0]->type;
    }
    type = tNode->type;
    if (type == KW_STRUCT)
    {
        alias = tNode->val;
    }
    int hasDeclared = 0;
    int hasFound = 0;
    for (int i = table.numOfSymbol - 1; (i >= 0) && (level == table.symbols[i]->level); i--)
    {
        if (strcmp(table.symbols[i]->id, identity->val) == 0)
        {
            if (table.symbols[i]->symbolType == DEFINATION)
            {
                hasFound = 1;
            }
            else
            {
                hasDeclared = 1;
            }
            break;
        }
    }
    if (hasFound == 1)
    {
        // not found
        error(identity->line, "variable %s has already been defined!", identity->val);
        return;
    }
    if (hasDeclared == 0)
    {
        table.symbols[table.numOfSymbol] = createSymbol(identity->val, type, alias, namespace, modifier, DEFINATION, level);
        table.numOfSymbol++;
        return;
    }
}

char *findNamespace(Node *identity, int level)
{
    /**
     * for use case
     */
    // default search
    int upper = level;
    char *namespace = "default";
    for (int i = table.numOfSymbol - 1; i >= 0; i--)
    {
        if (upper < table.symbols[i]->level)
        {
            break;
        }
        else if (upper > table.symbols[i]->level)
        {
            upper = table.symbols[i]->level;
        }
        if (strcmp(table.symbols[i]->id, identity->val) == 0)
        {
            namespace = table.symbols[i]->alias;
            break;
        }
    }

    return namespace;
}

/**
 *
 * typedef struct Symbol
{
    char *id; // identity

    char *alias;

    char *namespace;

    int type; // int, float, char...

    int modifier; // const, extern

    int symbolType; // defination, declare

    int level; // depth level

} Symbol;

*/
void printTable()
{
    printf("\033[35m");
    for (int i = 0; i < 107; i++)
        printf("-");
    printf("\n");
    printf("|%20s|%20s|%20s|%10s|%10s|%12s|%7s|\n", "id", "alias", "namespace", "type", "modifier", "symbolType", "level");
    for (int i = 0; i < 107; i++)
        printf("-");
    printf("\n");
    printf("\033[0m");
    for (int i = 0; i < table.numOfSymbol; i++)
    {
        char *type;
        char *modifier;
        char *symbolType;
        switch (table.symbols[i]->type)
        {
        case KW_INT:
            type = "int";
            break;
        case KW_FLOAT:
            type = "float";
            break;
        case KW_CHAR:
            type = "char";
            break;
        case KW_VOID:
            type = "void";
            break;
        case KW_STRUCT:
            type = "struct";
            break;
        default:
            type = "undefined";
            break;
        }
        switch (table.symbols[i]->modifier)
        {
        case KW_CONST:
            modifier = "const";
            break;
        case KW_EXTERN:
            modifier = "extern";
            break;
        default:
            modifier = "undefined";
            break;
        }
        switch (table.symbols[i]->symbolType)
        {
        case DEFINATION:
            symbolType = "defination";
            break;
        case DECLARE:
            symbolType = "declare";
            break;
        default:
            symbolType = "undefined";
            break;
        }
        printf("|%20s|%20s|%20s|%10s|%10s|%12s|%7d|\n", table.symbols[i]->id, table.symbols[i]->alias, table.symbols[i]->namespace, type, modifier, symbolType, table.symbols[i]->level);
    }
}

void deleteTable()
{
    for (int i = 0; i < table.numOfSymbol; i++)
        free(table.symbols[i]);
}