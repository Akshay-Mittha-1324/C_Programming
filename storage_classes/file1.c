#include<stdio.h>
static int num;
extern int num;
void foo1()
{
    printf("num = %d\n",num);
}