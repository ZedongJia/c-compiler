#ifndef CODE
#define CODE
#include <node.h>
#include <runtime.h>
#define CODE_SIZE 1024

enum CodeOp
{
    C_ASSIGN,
    // calculate
    C_ADD,
    C_MINUS,
    C_MULIPLY,
    C_DIVIDER,
    C_DELIVERY,

    // logical
    C_GREATER,
    C_SMALLER,
    C_GREATER_EQUAL,
    C_SMALLER_EQUAL,
    C_EQUAL,
    C_NOT_EQUAL,

    // move
    C_GOTO
};

typedef struct Code
{
    /* data */
    int line;
    int op;     // opt
    char *arg1; // addr, value, (line)
    char *arg2; // addr, value, (line)
} Code;

typedef struct CodeManager
{
    /* data */
    int prog[CODE_SIZE];
    int size;
    int line;
    Code *codeList[CODE_SIZE];
} CodeManager;

CodeManager *manager;

// sparate it to stmts level, stmt level and var level
void __dealStmts(Node *stmts);

void __dealStmt(Node *stmt, int isGlobal);

int __dealVar(Node *var, int isGlobal, int isDeclare);

// main process entry
void generateCode(Node *node);

// code structure and code manager utils
void initCodeManager();

Code *createCode(int line, int op, char *arg1, char *arg2);

void deleteCode(Code *code);

void deleteCodeManager();

void printCode(Code *code);

void printCodeManager();

#endif