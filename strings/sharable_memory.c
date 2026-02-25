#include<stdio.h>
void main()
{
    char *str1 = "Hello";   // * str1 & str2 share the same memory
    char *str2 = "Hello";   
    char *str3 = 'hello';   // * Different memory than str1 and str2 

    printf("%u\t%u\t%u\n",str1,str2,str3);  // ? address: 1000  1000    5000
}