//
// Created by MingZhang on 2018-05-04
//

#ifndef _GRAMMARTREE_H
#define _GRAMMARTREE_H

#include <iostream>
#include <cstdio>
#include <cstdarg>
#include <cstdlib>
#include <string>
using namespace std;

#define EMPTY -1
extern FILE* yyin;
extern char *yytext;
extern int yylineno;
extern int yyparse();

typedef struct node
{
    int linenum; // line number
    string name; // node name
    struct node *left;
    struct node *right;
    string __string;
    int __int;
    float __float;
}Node;

Node *createNode(string name, int num, ...);
void traverse(Node *root, int depth);

#endif