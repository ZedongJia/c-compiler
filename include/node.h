#ifndef NODE
#define NODE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <parser.h>

typedef struct Node
{
    int type;                 // type of the astNode, VARIABLE, ...
    char *lexeme;             // identity lexema
    char *valModifier;        // modifier `const`, `extern`
    char *valType;            // type of value, int\float...
    char *complexType;        // complex type, struct, ptr,arr...
    char *val;                // val
    int ptrStar;              // ptr star
    struct Node *initializer; // initializer
    struct Node *arrayDim;    // array dimension
    int line;                 // line
    int level;                // level of brace
    int width;                // bite width
    int numOfChildren;        // number of children node
    struct Node *parent;      // parent node
    struct Node **children;   // children node
    struct Runtime *runtime;  // find runtime
    struct Symbol *symbol;    // find symbol
} Node;

Node *createNode(int type, char *val, int line, int level, int numOfChildren, ...);

// prepend
void prependNode(Node *node, Node *child);
void prependNodes(Node *node, Node *__extern);

// append
void appendNode(Node *node, Node *child);
void appendNodes(Node *node, Node *__extern);

// remove
void removeNode(Node *node, int pos);

// format print
void printNode(Node *node, int depth, char *prefix);

// delete
void deleteNode(Node *node);

// add value type to variable
void analysisVar(Node *node, Node *specifier);

#endif