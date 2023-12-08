#ifndef RUNTIME
#define RUNTIME
#define SYMBOL_SIZE 512
#define ENV_SIZE 1024
#include <node.h>
#include <foutput.h>

// symbol <-map-> variable
typedef struct Symbol
{
    int pos;           // position in runtime
    int isDefination;  // defination or declare
    Node *ptr;         // first id, then variable
    char *lexeme;      // first get
    char *type;        // second get
    char *complexType; // second get
    int line;          // first get
    int offset;        // second get
    int duplicate;     // first get
    int numOfArgs;     // numOfArg
} Symbol;

typedef struct Runtime
{
    char *namespace;
    Symbol *symbols[SYMBOL_SIZE]; // symbols
    int numOfSymbols;             // number of symbols
    struct Runtime *prev;         // previous runtime
    int level;                    // level of {}
    int offset;                   // local offset
} Runtime;

typedef struct Environment
{
    /* data */
    Runtime *ptrs[ENV_SIZE];
    int size;
} Environment;

Environment *env;
Environment *structEnv;

Runtime *currRuntime;

// Global methods
void initEnv();

void pushRuntime(Environment *env, Runtime *runtime);

Runtime *findRuntimeByNamespace(Environment *env, char *namespace);

void moveToNextRuntime(int level);

void moveToPrevRuntime();

void deleteEnv();

// runtime methods
Runtime *createRuntime();

// symbol methods
Symbol *createSymbol();
void addSymbol(Runtime *runtime, Node *var);
void deleteSymbol(Runtime *runtime, int pos);
int lookAheadDefination(Runtime *runtime, Symbol *symbol);
// debug
void printRuntime(Runtime *runtime);
void printEnv();

#endif // RUNTIME
