%{
    //
    // Created by MingZhang on 2018-04-30
    //

    #include "grammarTree.h"
    #include "parser.tab.h"
%}

%option yylineno

digit         [0-9]
hex_digit     [0-9a-fA-F]
dicimal       [+-]?{digit}+
hex           [+-]?0[Xx]{hex_digit}+
float         [+-]?{digit}+.{digit}+
floatsc       [+-]?{float}[eE][+-]?{digit}
string        \"[^"\n]*\"
identifier    [a-zA-Z_][a-z0-9A-Z]*
blank         [ \t]+
comment       "//"[^\n]*

%%
{blank}
{comment}

"+"  { printf("(+, OP_ADD)\n"); yylval.treenode = createNode("+", 0, yylineno); return '+'; }
"-"  { printf("(-, OP_SUB)\n"); yylval.treenode = createNode("-", 0, yylineno); return '-'; }
"/"  { printf("(/, OP_DIV)\n"); yylval.treenode = createNode("/", 0, yylineno); return '/'; }
"*"  { printf("(*, OP_MUL)\n"); yylval.treenode = createNode("*", 0, yylineno); return '*'; }
"%"  { printf("(%%, OP_MOD)\n");yylval.treenode = createNode("%", 0, yylineno); return '%'; }
"<"  { printf("(<, OP_LT)\n");  yylval.treenode = createNode("<", 0, yylineno); return '<'; }
">"  { printf("(>, OP_GT)\n");  yylval.treenode = createNode(">", 0, yylineno); return '>'; }
"<=" { printf("(<=, OP_LE)\n"); yylval.treenode = createNode("OP_LE", 0, yylineno); return OP_LE; }
">=" { printf("(>=, OP_GE)\n"); yylval.treenode = createNode("OP_GE", 0, yylineno); return OP_GE; }
"==" { printf("(==, OP_EQUAL)\n"); yylval.treenode = createNode("OP_EQUAL", 0, yylineno); return OP_EQUAL; }
"!=" { printf("(!=, OP_NOTEQUAL)\n"); yylval.treenode = createNode("OP_NOTEQUAL", 0, yylineno); return OP_NOTEQUAL; }
"="  { printf("(=, OP_ASSIGN)\n"); yylval.treenode = createNode("=", 0, yylineno); return '='; }
"&&" { printf("(&&, OP_AND)\n"); yylval.treenode = createNode("OP_AND", 0, yylineno); return OP_AND; }
"||" { printf("(||, OP_OR)\n"); yylval.treenode = createNode("OP_OR", 0, yylineno); return OP_OR; }
"!"  { printf("(||, OP_NOT)\n"); yylval.treenode = createNode("!", 0, yylineno); return '!'; }

"."  { printf("(., SP_DOT)\n"); yylval.treenode = createNode(".", 0, yylineno); return '.'; }
","  { printf("(,, SP_COMMA)\n"); yylval.treenode = createNode(",", 0, yylineno); return ','; }
"{"  { printf("({, SP_OPEN_BRACE)\n"); yylval.treenode = createNode("{", 0, yylineno); return '{'; }
"}"  { printf("(}, SP_CLOSE_BRACE)\n"); yylval.treenode = createNode("}", 0, yylineno); return '}'; }
"["  { printf("([, SP_OPEN_BRACKET)\n"); yylval.treenode = createNode("[", 0, yylineno); return '['; }
"]"  { printf("(], SP_CLOSE_BRACKET)\n"); yylval.treenode = createNode("]", 0, yylineno); return ']'; }
"("  { printf("((, SP_OPEN_PARENTHESE)\n"); yylval.treenode = createNode("(", 0, yylineno); return '('; }
")"  { printf("(), SP_CLOSE_PARENTHESE)\n"); yylval.treenode = createNode(")", 0, yylineno); return ')'; }
";"  { printf("(;, SP_SEMICOLON)\n"); yylval.treenode = createNode(";", 0, yylineno); return ';'; }
\n   { printf("(\\n, EOL)\n"); }

"class"       { printf("(class, KEY_CLASS)\n"); yylval.treenode = createNode("KEY_CLASS", 0, yylineno); return KEY_CLASS; }
"return"      { printf("(class, KEY_RETURN)\n"); yylval.treenode = createNode("KEY_RETURN", 0, yylineno); return KEY_RETURN; }
"for"         { printf("(for, KEY_FOR)\n"); yylval.treenode = createNode("KEY_FOR", 0, yylineno); return KEY_FOR; }
"new"         { printf("(new, KEY_NEW)\n"); yylval.treenode = createNode("KEY_NEW", 0, yylineno); return KEY_NEW; }
"this"        { printf("(this, KEY_THIS)\n"); yylval.treenode = createNode("KEY_THIS", 0, yylineno); return KEY_THIS; }
"while"       { printf("(while, KEY_WHILE)\n"); yylval.treenode = createNode("KEY_WHILE", 0, yylineno); return KEY_WHILE; }
"static"      { printf("(static, KEY_STATIC)\n"); yylval.treenode = createNode("KEY_STATIC", 0, yylineno); return KEY_STATIC; }
"break"       { printf("(break, KEY_BREAK)\n"); yylval.treenode = createNode("KEY_BREAK", 0, yylineno); return KEY_BREAK; }
"if"          { printf("(if, KEY_IF)\n"); yylval.treenode = createNode("KEY_IF", 0, yylineno); return KEY_IF; }
"else"        { printf("(else, KEY_ELSE)\n"); yylval.treenode = createNode("KEY_ELSE", 0, yylineno); return KEY_ELSE; }
"extends"     { printf("(extends, KEY_EXTENDS)\n"); yylval.treenode = createNode("KEY_EXTENDS", 0, yylineno); return KEY_EXTENDS; }
"Print"       { printf("(Print, KEY_PRINT)\n"); yylval.treenode = createNode("KEY_PRINT", 0, yylineno); return KEY_PRINT; }
"ReadInteger" { printf("(ReadInteger, KEY_READINTEGER)\n"); yylval.treenode = createNode("KEY_READINTEGER", 0, yylineno); return KEY_READINTEGER; }
"ReadLine"    { printf("(ReadLine, KEY_READLINE)\n"); yylval.treenode = createNode("KEY_READLINE", 0, yylineno); return KEY_READLINE; }
"instanceof"  { printf("(instanceof, KEY_INSTANCEOF)\n"); yylval.treenode = createNode("KEY_INSTANCEOF", 0, yylineno); return KEY_INSTANCEOF; }

"void"        { printf("(void, TYPE_VOID)\n"); yylval.treenode = createNode("void", 0, yylineno); return TYPE_VOID; }
"int"         { printf("(int, TYPE_INTEGER)\n"); yylval.treenode = createNode("int", 0, yylineno); return TYPE_INTEGER; }
"float"       { printf("(float, TYPE_FLOAT)\n"); yylval.treenode = createNode("float", 0, yylineno); return TYPE_FLOAT; }
"bool"        { printf("(bool, TYPE_BOOL)\n"); yylval.treenode = createNode("bool", 0, yylineno); return TYPE_BOOL; }
"string"      { printf("(string, TYPE_STRING)\n"); yylval.treenode = createNode("string", 0, yylineno); return TYPE_STRING; }

"true"        { printf("(true, CONSTANT_BOOL)\n"); yylval.treenode = createNode("CONSTANT_BOOL", 0, yylineno); return CONSTANT_BOOL; }
"false"       { printf("(false, CONSTANT_BOOL)\n"); yylval.treenode = createNode("CONSTANT_BOOL", 0, yylineno); return CONSTANT_BOOL; }
"null"        { printf("(null, CONSTANT_NULL)\n"); yylval.treenode = createNode("CONSTANT_NULL", 0, yylineno); return CONSTANT_NULL; }
{dicimal}     { printf("(%s, CONSTANT_INT_D)\n", yytext); yylval.treenode = createNode("CONSTANT_INT_D", 0, yylineno); return CONSTANT_INT_D; }
{hex}         { printf("(%s, CONSTANT_INT_H)\n", yytext); yylval.treenode = createNode("CONSTANT_INT_H", 0, yylineno); return CONSTANT_INT_H; }
{float}       {printf("(%s, CONSTANT_FLOAT)\n", yytext); yylval.treenode = createNode("CONSTANT_FLOAT", 0, yylineno); return CONSTANT_FLOAT; }
{floatsc}     {printf("(%s, CONSTANT_FLOAT_SC)\n", yytext); yylval.treenode = createNode("CONSTANT_FLOAT_SC", 0, yylineno); return CONSTANT_FLOAT_SC; }
{string}      { printf("(%s, CONSTANT_STRING)\n", yytext); yylval.treenode = createNode("CONSTANT_STRING", 0, yylineno); return CONSTANT_STRING; }
{identifier}  { printf("(%s, IDENTIFIER)\n", yytext); yylval.treenode = createNode("IDENTIFIER", 0, yylineno); return IDENTIFIER; }

%%