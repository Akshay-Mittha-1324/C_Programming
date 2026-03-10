#include<stdio.h>
void main()
{
    float x = 20;
    int a = 10;
    int *ptr = &a;
    ptr = &x;
    int *p;
    printf("%u\t%u\t%u\n",*ptr,&x,*p);
}