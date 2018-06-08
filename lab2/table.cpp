//
// Created by MingZhang on 2018-05-18
//

#include "table.h"

void addClass(string class_name)
{
    ClassTable entry;
    entry.class_name = class_name;
    entry.type_name = "class";
    class_table.push_back(entry);
}

void addVariable(string var_name, string var_type)
{
    VariableTable entry;
    entry.var_name = var_name;
    entry.var_type = var_type;
    variable_table.push_back(entry);
}

void addFunction(string func_name, string return_type, vector<ParameterTable> &para_list)
{
    FunctionTable entry;
    entry.function_name = func_name;
    entry.return_type = return_type;
    entry.para_list = para_list;
    function_table.push_back(entry);
}

void displayTable()
{
    cout << "--------- class table ----------" << endl;
    cout << "-- name --    " << "-- type --" << endl;
        
    for(int i=0; i<class_table.size(); i++) 
    {
        cout << class_table[i].class_name << "    " << class_table[i].type_name << endl;
    }

    cout << endl;

    cout << "--------- variable table ---------" << endl;
    cout << "-- name --    " << "-- type --" << endl;

    for(int i=0; i<variable_table.size(); i++)
    {
        cout << variable_table[i].var_name <<"    " << variable_table[i].var_type << endl;
    }

    cout << endl;

    cout << "--------- function table ---------" << endl;
    cout << "-- name --    " << "-- return type --";
    for(int i=0;i<function_table.size(); i++)
    {
        cout << function_table[i].function_name << "    " << function_table[i].return_type;
        for(int j=0;j<function_table[i].para_list.size();j++)
        {
            cout << function_table[i].para_list[j].para_name << "    " << function_table[i].para_list[j].para_type;
        }
        cout << endl;
    }
    cout << endl;
}