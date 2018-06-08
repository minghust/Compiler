//
// Created by MingZhang on 2018-05-04
//

#include "grammarTree.h"

// notnull: e.g. createNode("Program", 1, $1)
// ε   :    e.g. createNode("Stmt", 0, -1)
Node* createNode(char* name, int num, ...)
{
    Node * root = (Node *)malloc(sizeof(Node));
    root->name = name;
    va_list type;
    va_start(type, num);

    if(--num >= 0) // > Non-terminal
    {
        // set up the child-brother tree
        Node *tmp = va_arg(type, Node*);
        root->left = tmp;
        root->linenum = tmp->linenum;

        while(num--)
        {
            tmp->right = va_arg(type, Node*);
            tmp = tmp->right;
        }
    }
    else // > terminal or null
    {
        int linenum = va_arg(type, int);
        root->linenum = linenum; // -1 or yylino
        if(!strcmp("IDENDIFIER", root->name) || !strcmp("CONSTANT_BOOL", root->name) || !strcmp("CONSTANT_STRING", root->name)|| !strcmp("CONSTANT_NULL", root->name))
        {
            char *id_or_const = (char *)malloc(sizeof(char) * strlen(yytext));
            strcpy(id_or_const, yytext);
            root->__string = id_or_const;
        }
        else if(!strcmp("CONSTANT_FLOAT", root->name) || !strcmp("CONSTANT_FLOAT_SC", root->name))
        {
            root->__float = atof(yytext);
        }
        else if(!strcmp("CONSTANT_INT_D", root->name))
            root->__int = atoi(yytext);
        else if(!strcmp("CONSTANT_INT_H", root->name))
        {
            char *pend;
            root->__int = strtol(yytext, &pend, 16);
        }
    }

    return root;
}

void traverse(Node *root, int depth)
{
    if(root)
    {
        for(int i=0; i<depth; i++)
        {
            printf(" ");
        }
        
        printf("%s", root->name);
        // Terminal     => print it's name and linenum, especially constant, print it's value
        // Non-terminal => print it's name and linenum
        if(root->linenum != EMPTY)
        {
            if(!strcmp("IDENDIFIER", root->name) || !strcmp("CONSTANT_BOOL", root->name) || !strcmp("CONSTANT_STRING", root->name)|| !strcmp("CONSTANT_NULL", root->name))
                printf(": %s\n", root->__string);
            else if(!strcmp("CONSTANT_FLOAT", root->name) || !strcmp("CONSTANT_FLOAT_SC", root->name))
                printf(": %f\n", root->__float);
            else if(!strcmp("COSTANT_INT_D", root->name) || !strcmp("CONSTANT_INT_H", root->name))
                printf(": %d\n", root->__int);
            else
                printf(" (line: %d)\n", root->linenum);
        }
        else
        {
            printf(": ε\n");
        }
        traverse(root->left, depth+1);
        traverse(root->right, depth);
    }
}

int main()
{
    yyparse();
    return 0;
}