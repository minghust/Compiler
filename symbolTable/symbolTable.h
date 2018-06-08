//
// Created by MingZhang on 2018-05-14
//

#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// symbol category
typedef enum category {
    classCat,
    varCat,
    funcCat,
    blockCat,
    constCat
} Category;

////////////////////////////////////////////////////////////
//              4 different scope symbol table            //
////////////////////////////////////////////////////////////

/* global scope symbol table */
typedef struct globaltable {
    char *symbol_name;
    Category category;
    ClassDescription *class_description;
    struct globaltable *next;
}GlobalTable;
/*****************************/

/* class scope symbol table */
typedef struct classtable {
    char *symbol_name;
    Category category;
    char * symbol_type;
    FunctionDescription *function_description;
    struct classtable *next;
}ClassTable;
/*****************************/

/* parameter scope symbol table */
typedef struct parametertable {
    char *symbol_name;
    char *symbol_type;
    LocalTable *function_table;
    struct parametertable *next;
}ParameterTable;
/*****************************/

/* local scope symbol table */
typedef struct localtable {
    char *symbol_name;
    Category category;
    char *symbol_type;
    struct localtable *builtin_table;
    struct localtable *next;
}LocalTable;
/*****************************/


////////////////////////////////////////////////////////////
//                2 different description                 //
////////////////////////////////////////////////////////////

/* class description, 
 * including its parent class and class scope
 */
typedef struct classdescription {
    char *parent_name;
    struct classdescription *next_parent;
    ClassTable *class_table;
}ClassDescription;
/**********************************************/

/* function description,
 * including its is-static or is-main judgement
 * and its parameter scope 
 */
typedef struct functiondescription {
    int is_static;
    int is_main;
    ParameterTable *parameter_table;
}FunctionDescription;
/**********************************************/


////////////////////////////////////////////////////////////
//                function declaration                    //
////////////////////////////////////////////////////////////

GlobalTable *
addGlobalTable(GlobalTable *table, char *name, ClassDescription *desc);

ClassTable *
addClassTable(ClassTable *table, char *name, Category cat, char *type, FunctionDescription *func_desc);

ParameterTable *
addParameterTable(ParameterTable *table, char *name, char *type, LocalTable *func_table);

LocalTable *
addLocalTable(LocalTable *table, char *name, Category cat, char *type, LocalTable *builtin_table);

////////////////////////////////////////////////////////////
ClassDescription *
createClassDescription(char *parent_name, ClassTable *class_table);

FunctionDescription *
createFunctionDescription(int is_static, char *name, ParameterTable *parameter_table);

////////////////////////////////////////////////////////////



#endif