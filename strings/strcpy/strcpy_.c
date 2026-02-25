#include<stdio.h>
#include<string.h>
void my_strcpy(char *dest, const char *src)
{
    int i;
    for(i = 0; src[i] != '\0' ; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    printf("%s\n",dest);
}
void main()
{
    char str[] = "Hello";
    char str1[strlen(str) + 1];
    strcpy(str1,str);
    char str2[strlen(str) + 1];
    my_strcpy(str2,str);
    printf("%s\n",str1);
}