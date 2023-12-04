#include <ext.h>

Node* astTree;

int main(int argc, char const *argv[])
{
    yyin = fopen(argv[1], "r");
    if (!yyin)
        return 1;
    yylineno = 1;
    yyparse();
    printNode(astTree, 0);
    deleteNode(astTree);
    return 0;
}
