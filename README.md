# Language WYJ and Its Compiler 

**For my girl**

## Essential
- flex
- bison

## Build & Run

	cd scanner-parser
	make
	./parser test.wyj
	cd symbolTable
	make
	./parser test.wyj

## Steps

#### Lexical Analysis

​	

>  cd scanner-parser
>
> make
> ./parser test.wyj

*Output the lexical unit(as a turple)*

``` text
(class, KEY_CLASS)
(test, IDENTIFIER)
(\n, EOL)
({, SP_OPEN_BRACE)
(\n, EOL)
(int, TYPE_INTEGER)
(m, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(int, TYPE_INTEGER)
(a, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(void, TYPE_VOID)
(dispaly, IDENTIFIER)
((, SP_OPEN_PARENTHESE)
(int, TYPE_INTEGER)
(a, IDENTIFIER)
(,, SP_COMMA)
(int, TYPE_INTEGER)
(b, IDENTIFIER)
(), SP_CLOSE_PARENTHESE)
(\n, EOL)
({, SP_OPEN_BRACE)
(\n, EOL)
(int, TYPE_INTEGER)
(x, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(float, TYPE_FLOAT)
(f, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(bool, TYPE_BOOL)
(b, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(bool, TYPE_BOOL)
(d, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(bool, TYPE_BOOL)
(e, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(string, TYPE_STRING)
(s, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(x, IDENTIFIER)
(=, OP_ASSIGN)
(-211, CONSTANT_INT_D)
(;, SP_SEMICOLON)
(\n, EOL)
(x, IDENTIFIER)
(=, OP_ASSIGN)
(-0x1a, CONSTANT_INT_H)
(;, SP_SEMICOLON)
(\n, EOL)
(f, IDENTIFIER)
(=, OP_ASSIGN)
(0.001, CONSTANT_FLOAT)
(;, SP_SEMICOLON)
(\n, EOL)
(f, IDENTIFIER)
(=, OP_ASSIGN)
(-1.2e-1, CONSTANT_FLOAT_SC)
(;, SP_SEMICOLON)
(\n, EOL)
(b, IDENTIFIER)
(=, OP_ASSIGN)
(true, CONSTANT_BOOL)
(;, SP_SEMICOLON)
(\n, EOL)
(s, IDENTIFIER)
(=, OP_ASSIGN)
("just test", CONSTANT_STRING)
(;, SP_SEMICOLON)
(\n, EOL)
(s, IDENTIFIER)
(=, OP_ASSIGN)
(null, CONSTANT_NULL)
(;, SP_SEMICOLON)
(\n, EOL)
(x, IDENTIFIER)
(=, OP_ASSIGN)
(a, IDENTIFIER)
(+, OP_ADD)
(b, IDENTIFIER)
(;, SP_SEMICOLON)
(\n, EOL)
(if, KEY_IF)
((, SP_OPEN_PARENTHESE)
(a, IDENTIFIER)
(==, OP_EQUAL)
(b, IDENTIFIER)
(), SP_CLOSE_PARENTHESE)
(\n, EOL)
({, SP_OPEN_BRACE)
(\n, EOL)
(if, KEY_IF)
((, SP_OPEN_PARENTHESE)
(c, IDENTIFIER)
(==, OP_EQUAL)
(d, IDENTIFIER)
(), SP_CLOSE_PARENTHESE)
(\n, EOL)
(Print, KEY_PRINT)
((, SP_OPEN_PARENTHESE)
("ifif", CONSTANT_STRING)
(), SP_CLOSE_PARENTHESE)
(;, SP_SEMICOLON)
(\n, EOL)
(else, KEY_ELSE)
(\n, EOL)
(Print, KEY_PRINT)
((, SP_OPEN_PARENTHESE)
("ifelse", CONSTANT_STRING)
(), SP_CLOSE_PARENTHESE)
(;, SP_SEMICOLON)
(\n, EOL)
(}, SP_CLOSE_BRACE)
(\n, EOL)
(else, KEY_ELSE)
(\n, EOL)
({, SP_OPEN_BRACE)
(\n, EOL)
(if, KEY_IF)
((, SP_OPEN_PARENTHESE)
(c, IDENTIFIER)
(==, OP_EQUAL)
(d, IDENTIFIER)
(), SP_CLOSE_PARENTHESE)
(\n, EOL)
(Print, KEY_PRINT)
((, SP_OPEN_PARENTHESE)
("elseif", CONSTANT_STRING)
(), SP_CLOSE_PARENTHESE)
(;, SP_SEMICOLON)
(\n, EOL)
(else, KEY_ELSE)
(\n, EOL)
(Print, KEY_PRINT)
((, SP_OPEN_PARENTHESE)
("elseelse", CONSTANT_STRING)
(), SP_CLOSE_PARENTHESE)
(;, SP_SEMICOLON)
(\n, EOL)
(}, SP_CLOSE_BRACE)
(\n, EOL)
(}, SP_CLOSE_BRACE)
(\n, EOL)
(}, SP_CLOSE_BRACE)
(\n, EOL)
```

#### Grammatical Analysis

> cd scanner-parser
>
> make
>
> ./parser test.wyj

*Output the abstract grammar tree*

```text
Program  --> at line: 1
 ClassDef  --> at line: 1
  KEY_CLASS  --> at line: 1
  IDENTIFIER: test
  {  --> at line: 2
  Fields  --> at line: 3
   VariableDef  --> at line: 3
    Variable  --> at line: 3
     Type  --> at line: 3
      TYPE_INTEGER  --> at line: 3
     IDENTIFIER: m
    ;  --> at line: 3
   Fields  --> at line: 4
    VariableDef  --> at line: 4
     Variable  --> at line: 4
      Type  --> at line: 4
       TYPE_INTEGER  --> at line: 4
      IDENTIFIER: a
     ;  --> at line: 4
    Fields  --> at line: 5
     FunctionDef  --> at line: 5
      Type  --> at line: 5
       TYPE_VOID  --> at line: 5
      IDENTIFIER: dispaly
      (  --> at line: 5
      Formals  --> at line: 5
       FormalList  --> at line: 5
        FormalList  --> at line: 5
         Variable  --> at line: 5
          Type  --> at line: 5
           TYPE_INTEGER  --> at line: 5
          IDENTIFIER: a
        ,  --> at line: 5
        Variable  --> at line: 5
         Type  --> at line: 5
          TYPE_INTEGER  --> at line: 5
         IDENTIFIER: b
      )  --> at line: 5
      StmtBlock  --> at line: 6
       {  --> at line: 6
       StmtList  --> at line: 7
        Stmt  --> at line: 7
         VariableDef  --> at line: 7
          Variable  --> at line: 7
           Type  --> at line: 7
            TYPE_INTEGER  --> at line: 7
           IDENTIFIER: x
          ;  --> at line: 7
        StmtList  --> at line: 8
         Stmt  --> at line: 8
          VariableDef  --> at line: 8
           Variable  --> at line: 8
            Type  --> at line: 8
             TYPE_FLOAT  --> at line: 8
            IDENTIFIER: f
           ;  --> at line: 8
         StmtList  --> at line: 9
          Stmt  --> at line: 9
           VariableDef  --> at line: 9
            Variable  --> at line: 9
             Type  --> at line: 9
              TYPE_BOOL  --> at line: 9
             IDENTIFIER: b
            ;  --> at line: 9
          StmtList  --> at line: 10
           Stmt  --> at line: 10
            VariableDef  --> at line: 10
             Variable  --> at line: 10
              Type  --> at line: 10
               TYPE_BOOL  --> at line: 10
              IDENTIFIER: d
             ;  --> at line: 10
           StmtList  --> at line: 11
            Stmt  --> at line: 11
             VariableDef  --> at line: 11
              Variable  --> at line: 11
               Type  --> at line: 11
                TYPE_BOOL  --> at line: 11
               IDENTIFIER: e
              ;  --> at line: 11
            StmtList  --> at line: 12
             Stmt  --> at line: 12
              VariableDef  --> at line: 12
               Variable  --> at line: 12
                Type  --> at line: 12
                 TYPE_STRING  --> at line: 12
                IDENTIFIER: s
               ;  --> at line: 12
             StmtList  --> at line: 13
              Stmt  --> at line: 13
               SimpleStmt  --> at line: 13
                LValue  --> at line: 13
                 IDENTIFIER: x
                =  --> at line: 13
                Expr  --> at line: 13
                 Constant  --> at line: 13
                  CONSTANT_INT_D  --> at line: 13
               ;  --> at line: 13
              StmtList  --> at line: 14
               Stmt  --> at line: 14
                SimpleStmt  --> at line: 14
                 LValue  --> at line: 14
                  IDENTIFIER: x
                 =  --> at line: 14
                 Expr  --> at line: 14
                  Constant  --> at line: 14
                   CONSTANT_INT_H: -26
                ;  --> at line: 14
               StmtList  --> at line: 15
                Stmt  --> at line: 15
                 SimpleStmt  --> at line: 15
                  LValue  --> at line: 15
                   IDENTIFIER: f
                  =  --> at line: 15
                  Expr  --> at line: 15
                   Constant  --> at line: 15
                    CONSTANT_FLOAT: 0.001
                 ;  --> at line: 15
                StmtList  --> at line: 16
                 Stmt  --> at line: 16
                  SimpleStmt  --> at line: 16
                   LValue  --> at line: 16
                    IDENTIFIER: f
                   =  --> at line: 16
                   Expr  --> at line: 16
                    Constant  --> at line: 16
                     CONSTANT_FLOAT_SC: -0.12
                  ;  --> at line: 16
                 StmtList  --> at line: 17
                  Stmt  --> at line: 17
                   SimpleStmt  --> at line: 17
                    LValue  --> at line: 17
                     IDENTIFIER: b
                    =  --> at line: 17
                    Expr  --> at line: 17
                     Constant  --> at line: 17
                      CONSTANT_BOOL: true
                   ;  --> at line: 17
                  StmtList  --> at line: 18
                   Stmt  --> at line: 18
                    SimpleStmt  --> at line: 18
                     LValue  --> at line: 18
                      IDENTIFIER: s
                     =  --> at line: 18
                     Expr  --> at line: 18
                      Constant  --> at line: 18
                       CONSTANT_STRING: "just test"
                    ;  --> at line: 18
                   StmtList  --> at line: 19
                    Stmt  --> at line: 19
                     SimpleStmt  --> at line: 19
                      LValue  --> at line: 19
                       IDENTIFIER: s
                      =  --> at line: 19
                      Expr  --> at line: 19
                       Constant  --> at line: 19
                        CONSTANT_NULL: null
                     ;  --> at line: 19
                    StmtList  --> at line: 20
                     Stmt  --> at line: 20
                      SimpleStmt  --> at line: 20
                       LValue  --> at line: 20
                        IDENTIFIER: x
                       =  --> at line: 20
                       Expr  --> at line: 20
                        Expr  --> at line: 20
                         LValue  --> at line: 20
                          IDENTIFIER: a
                        +  --> at line: 20
                        Expr  --> at line: 20
                         LValue  --> at line: 20
                          IDENTIFIER: b
                      ;  --> at line: 20
                     StmtList  --> at line: 21
                      Stmt  --> at line: 21
                       IfStmt  --> at line: 21
                        KEY_IF  --> at line: 21
                        (  --> at line: 21
                        BoolExpr  --> at line: 21
                         Expr  --> at line: 21
                          Expr  --> at line: 21
                           LValue  --> at line: 21
                            IDENTIFIER: a
                          OP_EQUAL  --> at line: 21
                          Expr  --> at line: 21
                           LValue  --> at line: 21
                            IDENTIFIER: b
                        )  --> at line: 21
                        Stmt  --> at line: 22
                         StmtBlock  --> at line: 22
                          {  --> at line: 22
                          StmtList  --> at line: 23
                           Stmt  --> at line: 23
                            IfStmt  --> at line: 23
                             KEY_IF  --> at line: 23
                             (  --> at line: 23
                             BoolExpr  --> at line: 23
                              Expr  --> at line: 23
                               Expr  --> at line: 23
                                LValue  --> at line: 23
                                 IDENTIFIER: c
                               OP_EQUAL  --> at line: 23
                               Expr  --> at line: 23
                                LValue  --> at line: 23
                                 IDENTIFIER: d
                             )  --> at line: 23
                             Stmt  --> at line: 24
                              PrintStmt  --> at line: 24
                               KEY_PRINT  --> at line: 24
                               (  --> at line: 24
                               ExprList  --> at line: 24
                                Expr  --> at line: 24
                                 Constant  --> at line: 24
                                  CONSTANT_STRING: "ifif"
                               )  --> at line: 24
                              ;  --> at line: 24
                             KEY_ELSE  --> at line: 25
                             Stmt  --> at line: 26
                              PrintStmt  --> at line: 26
                               KEY_PRINT  --> at line: 26
                               (  --> at line: 26
                               ExprList  --> at line: 26
                                Expr  --> at line: 26
                                 Constant  --> at line: 26
                                  CONSTANT_STRING: "ifelse"
                               )  --> at line: 26
                              ;  --> at line: 26
                           StmtList: ε
                          }  --> at line: 27
                        KEY_ELSE  --> at line: 28
                        Stmt  --> at line: 29
                         StmtBlock  --> at line: 29
                          {  --> at line: 29
                          StmtList  --> at line: 30
                           Stmt  --> at line: 30
                            IfStmt  --> at line: 30
                             KEY_IF  --> at line: 30
                             (  --> at line: 30
                             BoolExpr  --> at line: 30
                              Expr  --> at line: 30
                               Expr  --> at line: 30
                                LValue  --> at line: 30
                                 IDENTIFIER: c
                               OP_EQUAL  --> at line: 30
                               Expr  --> at line: 30
                                LValue  --> at line: 30
                                 IDENTIFIER: d
                             )  --> at line: 30
                             Stmt  --> at line: 31
                              PrintStmt  --> at line: 31
                               KEY_PRINT  --> at line: 31
                               (  --> at line: 31
                               ExprList  --> at line: 31
                                Expr  --> at line: 31
                                 Constant  --> at line: 31
                                  CONSTANT_STRING: "elseif"
                               )  --> at line: 31
                              ;  --> at line: 31
                             KEY_ELSE  --> at line: 32
                             Stmt  --> at line: 33
                              PrintStmt  --> at line: 33
                               KEY_PRINT  --> at line: 33
                               (  --> at line: 33
                               ExprList  --> at line: 33
                                Expr  --> at line: 33
                                 Constant  --> at line: 33
                                  CONSTANT_STRING: "elseelse"
                               )  --> at line: 33
                              ;  --> at line: 33
                           StmtList: ε
                          }  --> at line: 34
                      StmtList: ε
       }  --> at line: 35
     Fields: ε
  }  --> at line: 36
 ClassDefList: ε
```

#### Symbol Table

> cd symbolTable
>
> make
>
> ./parser test.wyj

*Output the symbol table*

```text
>>>>>>>> Symbol Table <<<<<<<<<

--------- class table ----------
name               type
--------------------------------
test              class
--------------------------------


--------- variable table ---------
name               type
----------------------------------
m                   int
a                   int
a                   int
b                   int
x                   int
f                 float
b                  bool
d                  bool
e                  bool
s                string
----------------------------------


-------------------- function table -----------------------
name               type    parameter list(name: type)
-----------------------------------------------------------
dispaly            void    b: int,  a: int
-----------------------------------------------------------
```

## Clean	

feel easy to

```bash
$ make clean
```

## LiCENSE

MIT License

Copyright (c) 2018 Ming Zhang

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.