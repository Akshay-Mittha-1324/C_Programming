// TODO WAP to implement own strlen fun.

#include<stdio.h>
void print(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("String Length = %d\n",count);
}
void main()
{
    char str[] = "Hello";
    print(str); 
}