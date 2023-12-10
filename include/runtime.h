#ifndef RUNTIME
#define RUNTIME
#define SYMBOL_SIZE 512
#define ENV_SIZE 1024
#include <node.h>
#include <foutput.h>

// symbol <-map-> variable
typedef struct Symbol
{
    int pos;           // relative position in runtime List
    int isDefination;  // defination (1) or declare (2)
    Node *ptr;         // variable ptr
    char *lexeme;      // id, first get
    char *type;        // valType, second get
    char *complexType; // complexType, second get
    int line;          // line, first get
    int offset;        // addr in runtime, relatively
    int duplicate;     // if duplicate ?, first get
    int numOfArgs;     // number of args
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

// env methods
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
Symbol *lookup(Runtime *runtime, char *id, int usePrev);
// debug
void printRuntime(Runtime *runtime);
void printEnv();

#endif // RUNTIME
