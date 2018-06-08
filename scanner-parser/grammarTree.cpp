//
// Created by MingZhang on 2018-05-04
//

#include "grammarTree.h"

// notnull: e.g. createNode("Program", 1, $1)
//    ε   : e.g. createNode("Stmt", 0, -1)
Node* createNode(string name, int num, ...)
{
    Node * root = new Node();
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
        if(("IDENTIFIER"==root->name) || ("CONSTANT_BOOL"==root->name) || ("CONSTANT_STRING"==root->name)|| ("CONSTANT_NULL"==root->name))
        {
            string id_or_const =yytext;
            root->__string = id_or_const;
        }
        else if(("CONSTANT_FLOAT"==root->name) || ("CONSTANT_FLOAT_SC"==root->name))
        {
            root->__float = atof(yytext);
        }
        else if("CONSTANT_INT_D"== root->name)
            root->__int = atoi(yytext);
        else if("CONSTANT_INT_H"==root->name)
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
            cout << " ";
        }
        
        cout << root->name;
        // printf("%s", root->name);
        // Terminal     => print it's name and linenum, especially constant, print it's value   
        // Non-terminal => print it's name and linenum
        if(root->linenum != EMPTY)
        {
            if(("IDENTIFIER"== root->name) || ("CONSTANT_BOOL"== root->name) || ("CONSTANT_STRING"==root->name)|| ("CONSTANT_NULL"==root->name))
                cout << ": " << root->__string;
            else if(("CONSTANT_FLOAT"==root->name) || ("CONSTANT_FLOAT_SC"==root->name))
                cout << ": " <<  root->__float;
            else if(("COSTANT_INT_D"==root->name) || ("CONSTANT_INT_H"==root->name))
                cout << ": " <<  root->__int;
            else
                cout << "  --> at line: " << root->linenum;
        }
        else
        {
            cout << ": ε";
        }
        cout << endl;
        traverse(root->left, depth+1);
        traverse(root->right, depth);
    }
}

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        if (!(yyin = fopen(argv[1], "r")))
        {
            perror(argv[1]);
            return 1;
        }
    }
    yyparse();
    return 0;
}
