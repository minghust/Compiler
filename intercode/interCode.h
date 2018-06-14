//
// Created by MingZhang on 2018-06-12
//

#ifndef INTERCODE_H_
#define INTERCODE_H_

#include <string>
#include <iostream>
#include <vector>
#include "grammarTree.h"

using namespace std;

enum opkind {VARIABLE,CONSTANT,LABEL_,FUNCTION_, CLASS_ };
enum intercodetype {CLASS, ASSIGN,ADD,SUB,MUL,DIV,RETURN,LABEL,GOTO,IFGOTO,CALL,ARG,FUNCTION,PARAM};

typedef struct operand{
    int kind;
    int var_no;
	string name;
    int int_value;
    float float_value;
    string string_value;
} Operand;

typedef struct interCode{
    int kind;
    struct{	Operand op;	}single_op;
    struct{ Operand left, right; }assign_op;
    struct{ Operand op1, op2, result; }binary_op;
    struct{ Operand x; Operand y; Operand label; string op; }tribasic_op;
} InterCode;


void insertInterCode(InterCode icode);
void printInterCode(void);
void printOperand(Operand &p);
void traverseTree(Node *root);

#endif
