//
// Created by MingZhang on 2018-05-14
//
#include "symbolTable.h"

GlobalTable *
addGlobalTable(GlobalTable *table, char *name, ClassDescription *class_desc)
{
    GlobalTable *entry = (GlobalTable *)malloc(sizeof(GlobalTable));
    
    char *sym_name = (char *)malloc(sizeof(char) * strlen(name));
    strcpy(sym_name, name);
    
    entry->symbol_name = sym_name;
    entry->category = classCat;
    entry->class_description = class_desc;
    entry->next = table;
    
    return entry;
}

ClassTable *
addClassTable(ClassTable *table, char *name, Category cat, char *type, FunctionDescription *func_desc)
{
    ClassTable *entry = (ClassTable *)malloc(sizeof(ClassTable));

    char *sym_name = (char *)malloc(sizeof(char) * strlen(name));
    strcpy(sym_name, name);

    entry->symbol_name = sym_name;
    entry->category = cat;
    entry->symbol_type = type;
    entry->function_description = func_desc;
    entry->next = table;

    return entry;
}

ParameterTable *
addParameterTable(ParameterTable *table, char *name, char *type, LocalTable *func_table)
{
    ParameterTable *entry = (ParameterTable *)malloc(sizeof(ParameterTable));

    char *sym_name = (char *)malloc(sizeof(char) * strlen(name));
    strcpy(sym_name, name);

    entry->symbol_name = sym_name;
    entry->symbol_type = type;
    entry->function_table = func_table;
    entry->next = table;

    return entry;
}

LocalTable *
addLocalTable(LocalTable *table, char *name, Category cat, char *type, LocalTable *builtin_table)
{
    LocalTable *entry = (LocalTable *)malloc(sizeof(LocalTable));

    char *sym_name = (char *)malloc(sizeof(char) * strlen(name));
    strcpy(sym_name, name);

    entry->symbol_name = sym_name;
    entry->symbol_type = type;
    entry->category = cat;
    entry->builtin_table = builtin_table;
    entry->next = table;

    return entry;
}

////////////////////////////////////////////////////////////
ClassDescription *
createClassDescription(char *parent_name, ClassTable *class_table)
{
    char *pname = NULL;
    ClassDescription *desc = (ClassDescription *)malloc(sizeof(ClassDescription));

    // if it has parent class
    if (parent_name)
    {
        *pname = (char*)malloc(sizeof(char) * strlen(parent_name));
        strcpy(pname, parent_name);
    }

    desc->parent_name = pname;
    desc->class_table = class_table;

    return desc;
}

FunctionDescription *
createFunctionDescription(int is_static, char *name, ParameterTable *parameter_table)
{
    FunctionDescription *desc = (FunctionDescription *)malloc(sizeof(FunctionDescription));

    desc->is_main = (!strcmp(name, "main")) ? 1 : 0;
    desc->is_static = is_static;
    desc->parameter_table = parameter_table;

    return desc;
}

////////////////////////////////////////////////////////////
