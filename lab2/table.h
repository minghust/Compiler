//
// Created by MingZhang on 2018-05-18
//

#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

////////////////////////////////////////////////////////////
//              4 different scope symbol table            //
////////////////////////////////////////////////////////////

/*****************************/

/* class scope symbol table */
typedef struct classtable {
    string class_name;
    string type_name;
}ClassTable;
/*****************************/

/* parameter scope symbol table */
typedef struct parametertable {
    string para_name;
    string para_type;
} ParameterTable;
/*****************************/

/* variable scope symbol table */
typedef struct functiontable {
    string function_name;
    string return_type;
    vector<ParameterTable> para_list;
}FunctionTable;
/*****************************/

/* variable scope symbol table */
typedef struct variabletable {
    string var_name;
    string var_type;
}VariableTable;
/*****************************/

vector<ClassTable> class_table;
vector<ParameterTable> parameter_table;
vector<FunctionTable> function_table;
vector<VariableTable> variable_table;

void addClass(string class_name);

void addVariable(string var_name, string var_type);

void addFunction(string func_name, string return_type, vector<ParameterTable> &para_list);

void displayTable();
#endif