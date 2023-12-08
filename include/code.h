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
    char *arg1; // addr, value, (signal)
    char *arg2; // addr, value, (signal)
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

void initCodeManager();

Code *createCode(int line, int op, char *arg1, char *arg2);

void generateCode(Node *node);

void deleteCode(Code *code);

void deleteCodeManager();

void printCode(Code *code);

void printCodeManager();

#endif