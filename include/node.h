#ifndef NODE
#define NODE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <parser.h>

typedef struct Node
{
    int type;
    char *val;
    char *code;
    int line;
    int level;
    int place;
    int numOfChildren;
    struct Node *parent;
    struct Node **children;
} Node;

Node *createNode(int type, char *val, int line, int level, int numOfChildren, ...);
void prependNode(Node *node, Node *child);
void prependNodes(Node *node, Node *__extern);
void appendNode(Node *node, Node *child);
void appendNodes(Node *node, Node *__extern);
void printNode(Node *node, int depth);
void deleteNode(Node *node);

#endif