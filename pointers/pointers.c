#include<stdio.h>
void main()
{
    int num = 12345;
    int *ptr = &num;
    printf("%d\t%p\n",num,ptr);
}