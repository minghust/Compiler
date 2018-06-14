%{
//
// Created by MingZhang on 2018-05-02
//

#include "grammarTree.h"
#include "lex.yy.c"
#include "symbolTable.h"
#include "semantic.h"
#include "interCode.h"
void yyerror(string msg, ...);
%}

%union {
    Node *treenode;
}

%start Program

%token <treenode> KEY_CLASS KEY_RETURN KEY_FOR KEY_NEW KEY_THIS KEY_WHILE
%token <treenode> KEY_STATIC KEY_BREAK KEY_IF KEY_ELSE
%token <treenode> KEY_EXTENDS KEY_PRINT KEY_READINTEGER KEY_READLINE KEY_INSTANCEOF

%token <treenode> '+' '-' '/' '*' '%' '<' '>' OP_LE OP_GE OP_EQUAL OP_NOTEQUAL OP_AND OP_OR
%token <treenode> '!' '='
%token <treenode> '.' ',' '(' ')' '[' ']' '{' '}' ';'

%token <treenode> TYPE_VOID TYPE_INTEGER TYPE_FLOAT TYPE_BOOL TYPE_STRING

%token <treenode> CONSTANT_BOOL CONSTANT_INT_D CONSTANT_INT_H CONSTANT_FLOAT CONSTANT_FLOAT_SC CONSTANT_STRING CONSTANT_NULL
%token <treenode> IDENTIFIER

%type <treenode> Program
%type <treenode> VariableDef
%type <treenode> Variable
%type <treenode> Type
%type <treenode> Formals
%type <treenode> FunctionDef
%type <treenode> ClassDef
%type <treenode> Fields
%type <treenode> StmtBlock
%type <treenode> Stmt
%type <treenode> SimpleStmt
%type <treenode> LValue
%type <treenode> Call
%type <treenode> Actuals
%type <treenode> ForStmt
%type <treenode> WhileStmt
%type <treenode> IfStmt
%type <treenode> ReturnStmt
%type <treenode> BreakStmt
%type <treenode> PrintStmt
%type <treenode> BoolExpr
%type <treenode> Expr
%type <treenode> Constant

%type <treenode> ClassDefList FormalList ExprList StmtList

%right '='
%left OP_OR
%left OP_AND
%left OP_EQUAL OP_NOTEQUAL
%left '<' OP_LE '>' OP_GE 
%left '+' '-'
%left '*' '/' '%'
%right '!'
%right UMINUS
%left '.'
%left ']'
%right '['
%left ')'
%right '('
%nonassoc SINGLE_IF
%nonassoc KEY_ELSE

%%
Program: ClassDef ClassDefList { 
    $$ = createNode("Program", 2, $1, $2);
    traverse($$, 0);
    displayTable();
    OutputSemanticError();

    traverseTree($$);
    printInterCode();
}
    ;

ClassDefList: ClassDefList ClassDef{ $$ = createNode("ClassDefList", 2, $1, $2); }
    | { $$ = createNode("ClassDefList", 0, EMPTY); }
    ;

ClassDef: KEY_CLASS IDENTIFIER '{' Fields '}' { 
    $$ = createNode("ClassDef", 5, $1, $2, $3, $4, $5);
    addClass($2->__string);
}
    | KEY_CLASS IDENTIFIER KEY_EXTENDS IDENTIFIER '{' Fields '}' { 
    $$ = createNode("ClassDef", 7, $1, $2, $3, $4, $5, $6, $7);
    addClass($2->__string);
    addClass($4->__string);
}
    ;

Fields: VariableDef Fields{ $$ = createNode("Fields", 2, $1, $2); }
    | FunctionDef Fields{ $$ = createNode("Fields", 2, $1, $2); }
    | { $$ = createNode("Fields", 0, EMPTY); }
    ;

    VariableDef: Variable ';' { $$ = createNode("VariableDef", 2, $1, $2); }
    ;

Variable: Type IDENTIFIER { 
    $$ = createNode("Variable", 2, $1, $2);

    addVariable($2->__string, $1->left->name);
}
    ;

Type: TYPE_INTEGER         { $$ = createNode("Type", 1, $1); }
    | TYPE_FLOAT           { $$ = createNode("Type", 1, $1); }
    | TYPE_BOOL            { $$ = createNode("Type", 1, $1); }
    | TYPE_STRING          { $$ = createNode("Type", 1, $1); }
    | TYPE_VOID            { $$ = createNode("Type", 1, $1); }
    | KEY_CLASS IDENTIFIER { $$ = createNode("Type", 2, $1, $2); }
    | Type '[' ']'         { $$ = createNode("Type", 3, $1, $2, $3); }
    ;

Formals: FormalList { $$ = createNode("Formals", 1, $1); }
    |  { $$ = createNode("Formals", 0, EMPTY); }
    ;

FormalList: FormalList ',' Variable { $$ = createNode("FormalList", 3, $1, $2, $3); }
    | Variable { $$ = createNode("FormalList", 1, $1); }
    ;

FunctionDef: Type IDENTIFIER '(' Formals ')' StmtBlock { 
    $$ = createNode("FunctionDef", 6, $1, $2, $3, $4, $5, $6); 
    vector<ParameterTable> para_list;
    ParameterTable tmp;
    
    Node *para_point = $4->left;
    while(para_point)
    {
        if(!para_point->left->right) // only one parameter
        {
            tmp.para_name = para_point->left->left->right->__string;
            tmp.para_type = para_point->left->left->left->name;
            para_list.push_back(tmp);
            break;
        }
        else
        {
            tmp.para_name = para_point->left->right->right->left->right->__string;
            tmp.para_type = para_point->left->right->right->left->left->name;
            para_list.push_back(tmp);
            para_point = para_point->left;
        }
    }

    addFunction($2->__string, $1->left->name, para_list);

}
    | KEY_STATIC Type IDENTIFIER '(' Formals ')' StmtBlock {
        $$ = createNode("FunctionDef", 7, $1, $2, $3, $4, $5, $6, $7); 
        vector<ParameterTable> para_list;
        ParameterTable tmp;
        
        Node *para_point = $4->left;
        while(para_point)
        {
            if(!para_point->left->right) // only one parameter
            {
                tmp.para_name = para_point->left->left->right->__string;
                tmp.para_type = para_point->left->left->left->name;
                para_list.push_back(tmp);
                break;
            }
            else
            {
                tmp.para_name = para_point->left->right->right->left->right->__string;
                tmp.para_type = para_point->left->right->right->left->left->name;
                para_list.push_back(tmp);
                para_point = para_point->left;
            }
        }
        addFunction($2->__string, $1->left->name, para_list);		
    }
    ;

StmtBlock: '{' StmtList '}' { $$ = createNode("StmtBlock", 3, $1, $2, $3); }
    ;

StmtList: Stmt StmtList { $$ = createNode("StmtList", 2, $1, $2); }
    | { $$ = createNode("StmtList", 0, EMPTY); }
    ;

Stmt: VariableDef    { $$ = createNode("Stmt", 1, $1); }
    | SimpleStmt ';' { $$ = createNode("Stmt", 2, $1, $2); }
    | IfStmt         { $$ = createNode("Stmt", 1, $1); }
    | WhileStmt      { $$ = createNode("Stmt", 1, $1); }
    | ForStmt        { $$ = createNode("Stmt", 1, $1); }
    | BreakStmt ';'  { $$ = createNode("Stmt", 2, $1, $2); }
    | ReturnStmt ';' { $$ = createNode("Stmt", 2, $1, $2); }
    | PrintStmt ';'  { $$ = createNode("Stmt", 2, $1, $2); }
    | StmtBlock      { $$ = createNode("Stmt", 1, $1); }
    ;

SimpleStmt: LValue '=' Expr { $$ = createNode("SimpleStmt", 3, $1, $2, $3); 
    
    // semantic analysis
    if($3->left->name == "Constant")
    {
        if(checkConstant($1->left->__string, $3->left->left->name) == false)
        {
            stringstream ss;
            ss << yylineno;
            string error = "Semantic Error at line "+ss.str()+": constant type is not satisfied with "+$1->left->__string;
            // cout << "Semantic Error at line " << yylineno << ": constant type is not satisfied with " << $1->left->__string << endl;
            semantic_error.push_back(error);
        }
    }
    else if($3->left->name == "LValue")
    {
        if(checkLvalue($1->left->__string, $3->left->left->__string) == false)
        {
            stringstream ss;
            ss << yylineno;
            string error = "Semantic Error at line "+ss.str()+ ": "+ $3->left->left->__string+ " type is not satisfied with "+ $1->left->__string;
            // cout << "Semantic Error at line " << yylineno << ": " << $3->left->left->__string << " type is not satisfied with " << $1->left->__string << endl;
            semantic_error.push_back(error);
        }
    }
    else if($3->left->name == "Call")
    {
        if(checkCall($1->left->__string, $3->left->left->__string) == false)
        {
            stringstream ss;
            ss << yylineno;
            string error = "Semantic Error at line "+ss.str()+ ": "+"function " + $3->left->left->__string + " type is not satisfied with " +$1->left->__string;
            // cout << "Semantic Error at line " << yylineno << ": ";
            // cout << "function " << $3->left->left->__string << " type is not satisfied with " << $1->left->__string << endl;
            semantic_error.push_back(error);
        }
    }
}
    | { $$ = createNode("SimpleStmt", 0, EMPTY); }
    ;

LValue: IDENTIFIER { $$ = createNode("LValue", 1, $1); }
    | Expr '[' Expr ']' { $$ = createNode("LValue", 4, $1, $2, $3, $4); }
    | Expr '.' IDENTIFIER { $$ = createNode("LValue", 3, $1, $2, $3); }
    ;

Call: IDENTIFIER '(' Actuals ')' { $$ = createNode("Call", 4, $1, $2, $3, $4); }
    | Expr '.' IDENTIFIER '(' Actuals ')' { $$ = createNode("Call", 6, $1, $2, $3, $4, $5, $6); }
    ;

Actuals: ExprList { $$ = createNode("Actuals", 1, $1); }
    | { $$ = createNode("Actuals", 0, EMPTY); }
    ;

ExprList: ExprList ',' Expr { $$ = createNode("ExprList", 3, $1, $2, $3); }
    | Expr { $$ = createNode("ExprList", 1, $1); }
    ; 

ForStmt: KEY_FOR '(' SimpleStmt ';' BoolExpr ';' SimpleStmt ')' Stmt { $$ = createNode("ForStmt", 9, $1, $2, $3, $4, $5, $6, $7, $8, $9); }
    ;

WhileStmt: KEY_WHILE '(' BoolExpr ')' Stmt { $$ = createNode("WhileStmt", 5, $1, $2, $3, $4, $5); }
    ;

IfStmt: KEY_IF '(' BoolExpr ')' Stmt %prec SINGLE_IF { $$ = createNode("IfStmt", 5, $1, $2, $3, $4, $5); }
    | KEY_IF '(' BoolExpr ')' Stmt KEY_ELSE Stmt { $$ = createNode("IfStmt", 7, $1, $2, $3, $4, $5, $6, $7); }
    ;


ReturnStmt: KEY_RETURN { $$ = createNode("ReturnStmt", 1, $1); }
    | KEY_RETURN Expr { $$ = createNode("ReturnStmt", 2, $1, $2); }
    ;

BreakStmt: KEY_BREAK { $$ = createNode("BreakStmt", 1, $1); }
    ;

PrintStmt: KEY_PRINT '(' ExprList ')' { $$ = createNode("PrintStmt", 4, $1, $2, $3, $4); }
    ;

BoolExpr: Expr { $$ = createNode("BoolExpr", 1, $1); }
    ;

Expr: Constant                                   { $$ = createNode("Expr", 1, $1); }
    | LValue                                     { $$ = createNode("Expr", 1, $1); }
    | KEY_THIS                                   { $$ = createNode("Expr", 1, $1); }
    | Call                                       { $$ = createNode("Expr", 1, $1); }
    | '(' Expr ')'                               { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '+' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '-' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '*' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '/' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '%' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | '-' Expr %prec UMINUS                      { $$ = createNode("Expr", 2, $1, $2); }
    | Expr '<' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_LE Expr                            { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr '>' Expr                              { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_GE Expr                            { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_EQUAL Expr                         { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_NOTEQUAL Expr                      { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_AND Expr                           { $$ = createNode("Expr", 3, $1, $2, $3); }
    | Expr OP_OR Expr                            { $$ = createNode("Expr", 3, $1, $2, $3); }
    | '!' Expr                                   { $$ = createNode("Expr", 2, $1, $2); }
    | KEY_READINTEGER '(' ')'                    { $$ = createNode("Expr", 3, $1, $2, $3); }
    | KEY_READLINE '(' ')'                       { $$ = createNode("Expr", 3, $1, $2, $3); }
    | KEY_NEW IDENTIFIER '(' ')'                 { $$ = createNode("Expr", 4, $1, $2, $3, $4); }
    | KEY_NEW Type '[' Expr ']'                  { $$ = createNode("Expr", 5, $1, $2, $3, $4, $5); }
    | KEY_INSTANCEOF '(' Expr ',' IDENTIFIER ')' { $$ = createNode("Expr", 6, $1, $2, $3, $4, $5, $6); }
    | '(' KEY_CLASS IDENTIFIER ')' Expr          { $$ = createNode("Expr", 5, $1, $2, $3, $4, $5); }
    ;

Constant: CONSTANT_BOOL                          { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_FLOAT                             { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_FLOAT_SC                          { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_INT_D                             { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_INT_H                             { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_STRING                            { $$ = createNode("Constant", 1, $1); }
    | CONSTANT_NULL                              { $$ = createNode("Constant", 1, $1); }
;
  
%%
void yyerror(string msg, ...)
{
    va_list ap;
    va_start(ap, msg);
    fprintf(stderr, "Error at Line %d: ", yylineno);
    vfprintf(stderr, msg.c_str(), ap);
    fprintf(stderr, ".\n");
}
