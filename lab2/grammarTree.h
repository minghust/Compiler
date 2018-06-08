//
// Created by MingZhang on 2018-05-04
//

#ifndef _GRAMMARTREE_H
#define _GRAMMARTREE_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "symbolTable.h"

#define EMPTY -1
extern char *yytext;
extern FILE* yyin;
extern int yylineno;
extern int yyparse();

typedef struct node
{
    int linenum; // line number
    char* name; // node name
    struct node *left;
    struct node *right;
    union
    {
        char* __string;
        int __int;
        float __float;
    };
}Node;

Node *createNode(char *name, int num, ...);
void traverse(Node *root, int depth);

#endif