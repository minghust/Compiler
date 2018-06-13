//
// Created by MingZhang on 2018-05-31
//

#include "semantic.h"

vector<string>semantic_error;

/* 
 * check constant's type is satisfied
 * with the lvalue's type or not 
 */
bool checkConstant(string leftname, string rightname) 
{
    for(int i = 0; i<variable_table.size(); i++) 
    {
        if(variable_table[i].var_name == leftname)
        {
            string type = variable_table[i].var_type;
            if(type=="string" && rightname=="CONSTANT_STRING")
                return true;
            else if(type=="bool" && rightname=="CONSTANT_BOOL")
                return true;
            else if(type=="int" && rightname=="CONSTANT_INT_D")
                return true;
            else if(type=="int" && rightname=="CONSTANT_INT_H")
                return true;
            else if(type=="float" && rightname=="CONSTANT_FLOAT")
                return true;
            else if(type=="float" && rightname=="CONSTANT_FLOAT_SC")
                return true;
        }
    }

    return false;
}

/* 
 * check lvalue's type is satisfied
 * with the lvalue's type or not 
 */
bool checkLvalue(string leftname, string rightname)
{
    for(int i = 0; i<variable_table.size(); i++) 
    {
        if(variable_table[i].var_name == leftname)
        {
            for(int j=0; j<variable_table.size(); j++)
            {
                if(variable_table[j].var_name == rightname)
                {
                    if(variable_table[i].var_type == variable_table[j].var_type)
                        return true;
                }
            }
        }
    }

    return false;
}

/* 
 * check function's type is satisfied
 * with the lvalue's type or not 
 */
bool checkCall(string leftname, string rightname)
{
    for(int i = 0; i<variable_table.size(); i++) 
    {
        if(variable_table[i].var_name == leftname)
        {
            for(int j=0; j<function_table.size(); j++)
            {
                if(function_table[j].function_name == rightname)
                {
                    if(variable_table[i].var_type == function_table[j].return_type)
                        return true;
                }
            }
        }
    }

    return false;
}

void OutputSemanticError() 
{
    if(semantic_error.size()!=0)
    {
        cout << endl << "Semantic Errors:" << endl<<endl;
    }
    for(int i=0;i<semantic_error.size();i++)
    {
        cout << semantic_error[i] << endl;
    }
}