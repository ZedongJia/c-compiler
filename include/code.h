#ifndef CODE
#define CODE
#include <node.h>
#include <runtime.h>
#define CODE_SIZE 1024

enum CodeOp
{
    C_ASSIGN,
    // calculate
    C_PLUS,
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
    C_NOT,
    C_OR,
    C_AND,
    // function call
    C_CALL,
    C_PARAM,
    // move
    C_JF,
    C_J,
    // transform
    C_FLOAT,
    C_INT,
    C_CHAR,
    C_POINTER,
    // get
    C_GET_DATA,
    C_GET_ADDR,
    // prog eof
    C_EXIT,
    C_RETURN,
    C_FUNC,
    C_END_FUNC,
    C_STRUCT,
    C_END_STRUCT,
    C_DEF,
};

void printOp(int op);

typedef struct ExpVal
{
    char *type;        // exp type
    char *valType;     // exp value type
    char *complexType; // exp complex type
    int ptrStar;       // number of ptr stars
    char *val;         // value
} ExpVal;

// expval methods
ExpVal *createExpVal(char *type, char *valType, char *val);

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
    int prog[CODE_SIZE];       // program (line list)
    int line;                  // current line
    Code *codeList[CODE_SIZE]; // codes
} CodeManager;

CodeManager *manager;

// sparate it to stmts level, stmt level, var level and exp level
void __dealInitializer(Node *var);

void __dealStmts(Node *stmts);

void __dealStmt(Node *stmt, int isGlobal);

int __dealVar(Node *var, int isGlobal, int isDeclare);

ExpVal *__dealExp(Node *exp);

int __dealCast(int line, char *valType, ExpVal *tra, char *errorMsg);

int __dealTypePriority(char *valType);

// main process entry
void generateCode(Node *node);

// code structure methods
Code *createCode(int line, int op, char *arg1, char *arg2);

void deleteCode(Code *code);

void printCode(Code *code);

// code manager methods
void initCodeManager();

int addCode(int op, char *arg1, char *arg2);

void deleteCodeManager();

void printCodeManager();

#endif