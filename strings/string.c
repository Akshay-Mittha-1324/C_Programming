#include<stdio.h>
void main()
{
    char s[] = "Hello";
    printf("%s\n",s);
    char str[] = {'H','e','l','l','o','\0', 'W' , 'o' , 'r', 'l','d'};
    printf("%s\n",str);
    char str1[20];
    scanf("%s",str1);
    printf("%s\n",str1);
    //scanf(" %[^\n]s",str1);
    //printf("%s\n",str1);
}