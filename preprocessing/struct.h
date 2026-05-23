#include<stdio.h>

//#pragma once    // ? Compiler dependent and its not portable

#ifndef STRUCT_H    // ? If not defined then only enter the block else skip the block
#define STRUCT_H

struct Student
{
    int id;
    char name[30];
};
#endif