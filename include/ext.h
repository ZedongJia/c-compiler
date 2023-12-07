#if !defined(EXTERN)
#define EXTERN

#include <node.h>
#include <runtime.h>
#include <foutput.h>

extern int yylex(void);
extern int yyparse(void);
extern FILE* yyin;
extern int yylineno;
extern Node* astTree;
extern int level;

#endif // EXTERN
