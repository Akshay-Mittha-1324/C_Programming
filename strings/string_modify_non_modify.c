#include<stdio.h>
int main()
{
    // * Modifiable due to copy of string is stored in the stack

    char str[] = "Hello";
    str[0] = 'h';
    printf("%s",str);
    
    // * Non Modifiable due to pointer pointing in the code / text segment

    char *str1 = "Hello";
    str1[0] = 'h';
    printf("%s",str1);
}