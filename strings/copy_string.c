// TODO WAP to copy string str = 'hello' str1 = 'hello'

#include<stdio.h>
#include<string.h>
void copy(char str[])
{
    int size = strlen(str);
    char str1[size];
    for(int i = 0; i < size; i++)
    {
        str1[i] = str[i];
    }
    printf("Original = %s\t%p\n",str,str);
    printf("Copied String = %s\t%p\n",str1,str1);
}
void main()
{
    char str[] = "Hello";
    copy(str);
}