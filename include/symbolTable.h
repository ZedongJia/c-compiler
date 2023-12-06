#if !defined(SYMBOL_TABLE)
#define SYMBOL_TABLE
#include <node.h>
#include <string.h>
#include <foutput.h>
#define TABLE_SIZE 1024

enum SymbolType
{
    DEFINATION = 0,
    DECLARE = 1
};

/* symbol */
typedef struct Symbol
{
    char *id; // identity

    char *alias;

    char *namespace;

    int type; // int, float, char...

    int modifier; // const, extern

    int symbolType; // defination, declare

    int level; // depth level

} Symbol;

typedef struct SymbolTable
{
    /* data */
    Symbol *symbols[TABLE_SIZE];
    int numOfSymbol;
} SymbolTable;

SymbolTable table;

Symbol *createSymbol(char *id, int type, char *alias, char *namespace, int modifier, int symbolType, int level);

void lookupTable(Node *identity, char *namespace, int level);

void lookupAndFillTable(Node *node, char *namespace, int level);

void fillTable(Node *node, char *namespace, int level);

char *findNamespace(Node *identity, int level);

void printTable();

void deleteTable();

/* var & func table methods */

/* struct methods */

#endif // SYMBOL_TABLE
