// TODO WAP to reverse the string 

#include<stdio.h>
#include<string.h>
void rev(char str[])
{
    char temp;
    for(int i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
    printf("%s\n",str);
}
void main()
{
    char str[] = "Attili_Sattai";
    rev(str);
}