#include <runtime.h>

// rumtime methods
Runtime *createRuntime()
{
    Runtime *runtime = (Runtime *)malloc(sizeof(Runtime));
    runtime->numOfSymbols = 0;
    runtime->prev = NULL;
    runtime->level = 0;
    runtime->offset = 0;
    runtime->namespace = "default";
    return runtime;
}

// symbol methods
Symbol *createSymbol()
{
    Symbol *symbol = (Symbol *)malloc(sizeof(Symbol));
    symbol->ptr = NULL;
    symbol->lexeme = NULL;
    symbol->type = NULL;
    symbol->offset = 0;
    symbol->isDefination = 0;
    symbol->pos = -1;
    return symbol;
}

void addSymbol(Runtime *runtime, Node *var)
{
    /**
     * Lazy check, wait for dynamic analysis
     */
    int hasFound = 0;
    // check
    if (runtime->level == 0)
    {
        for (int i = 0; i < runtime->numOfSymbols; i++)
        {
            if (strcmp(runtime->symbols[i]->lexeme, var->lexeme) == 0)
            {
                hasFound = 1;
                break;
            }
        }
    }
    else
    {
        int line = -1;
        for (int i = 0; i < runtime->numOfSymbols; i++)
        {
            if (strcmp(runtime->symbols[i]->lexeme, var->lexeme) == 0)
            {
                hasFound = 1;
                line = runtime->symbols[i]->line;
                break;
            }
        }
        // if (hasFound == 1)
        // {
        //     error(var->line, "%s has already been declared at line:%d", var->lexeme, line);
        // }
    }
    Symbol *symbol = createSymbol();

    // we can get var, lexeme, line
    symbol->ptr = var;
    symbol->lexeme = var->lexeme;
    symbol->line = var->line;
    symbol->duplicate = hasFound;
    symbol->pos = runtime->numOfSymbols;
    runtime->symbols[runtime->numOfSymbols] = symbol;
    runtime->numOfSymbols++;
    // set runtime
    var->runtime = runtime;
    // set symbol
    var->symbol = symbol;
}

// global methods

void initEnv()
{
    env = (Environment *)malloc(sizeof(Environment));
    env->size = 0;
    Runtime *runtime = createRuntime();
    env->ptrs[env->size] = runtime;
    env->size++;
    currRuntime = runtime;

    structEnv = (Environment *)malloc(sizeof(Environment));
    structEnv->size = 0;
}

void __deleteRuntime(Runtime *runtime)
{
    for (int i = 0; i < runtime->numOfSymbols; i++)
        free(runtime->symbols[i]);
    free(runtime);
}

void pushRuntime(Environment *env, Runtime *runtime)
{
    env->ptrs[env->size] = runtime;
    env->size++;
}

Runtime *findRuntimeByNamespace(Environment *env, char *namespace)
{
    for (int i = 0; i < env->size; i++)
    {
        if (strcmp(env->ptrs[i]->namespace, namespace) == 0)
        {
            return env->ptrs[i];
        }
    }
    return NULL;
}

void moveToNextRuntime(int level)
{
    Runtime *runtime = createRuntime();
    runtime->level = level;
    env->ptrs[env->size] = runtime;
    runtime->prev = currRuntime;
    currRuntime = runtime;
    env->size++;
}

void moveToPrevRuntime()
{
    // back to last runtime
    currRuntime = currRuntime->prev;
}

void deleteEnv()
{
    for (int i = 0; i < env->size; i++)
        __deleteRuntime(env->ptrs[i]);
    free(env);
    free(structEnv);
}

void deleteSymbol(Runtime *runtime, int pos)
{
    free(runtime->symbols[pos]);
    for (int i = pos; i < runtime->numOfSymbols - 1; i++)
    {
        runtime->symbols[i] = runtime->symbols[i + 1];
        runtime->symbols[i]->pos = i - 1;
    }
    runtime->numOfSymbols--;
}

int lookAheadDefination(Runtime *runtime, Symbol *symbol)
{
    int pos = symbol->pos;
    for (int i = pos; i >= 0; i--)
    {
        if (runtime->symbols[i]->isDefination == 1 && strcmp(symbol->lexeme, runtime->symbols[i]->lexeme) == 0)
        {
            return 1;
        }
    }
    return -1;
}

void printRuntime(Runtime *runtime)
{
    for (int i = 0; i < 79; i++)
        printf("-");
    printf("\n");
    printf("| %10s | %15s | %15s | %6s | %5s | %9s |\n",
           "Lexeme",
           "Complex Type",
           "Type", "Offset",
           "Line",
           "duplicate");
    for (int i = 0; i < 79; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < runtime->numOfSymbols; i++)
        printf(
            "| %10s | %15s | %15s | %6d | %5d | %9d |\n",
            runtime->symbols[i]->lexeme,
            runtime->symbols[i]->complexType,
            runtime->symbols[i]->type,
            runtime->symbols[i]->offset,
            runtime->symbols[i]->line,
            runtime->symbols[i]->duplicate);
}

void printEnv()
{
    for (int i = 0; i < env->size; i++)
    {
        printf(
            "\n\n\033[35m<--Runtime[ Namespace:%15s | Level:%2d ]-->\033[0m\n",
            env->ptrs[i]->namespace,
            env->ptrs[i]->level);
        printRuntime(env->ptrs[i]);
    }
}