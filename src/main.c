#include <ext.h>



Node *astTree;
int main(int argc, char const *argv[])
{
    printf("\33[36m<--Start Parse-->\33[0m\n");
    yyin = fopen(argv[1], "r");
    if (!yyin)
        return 1;
    yylineno = 1;
    // env control
    initEnv();

    yyparse();
    printNode(astTree, 0, NULL);

    // codemanager
    initCodeManager();
    generateCode(astTree);

    printCodeManager();
    deleteCodeManager();

    // env control
    printEnv();
    deleteEnv();

    // finally delete node
    deleteNode(astTree);
    return 0;
}
