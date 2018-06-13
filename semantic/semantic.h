//
// Created by MingZhang on 2018-05-31
//

#ifndef SEMANTIC_H_
#define SEMANTIC_H_

#include <sstream>
#include "symbolTable.h"

extern vector<ParameterTable> parameter_table;
extern vector<FunctionTable> function_table;
extern vector<VariableTable> variable_table;

bool checkConstant(string leftname, string rightname);
bool checkLvalue(string leftname, string rightname);
bool checkCall(string leftname, string rightname);
void OutputSemanticError();
extern vector<string>semantic_error;

#endif