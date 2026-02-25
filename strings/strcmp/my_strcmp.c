#include<stdio.h>
#include<string.h>
int my_strcmp(const char *str1, const char *str2)
{
    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i]; 
    }
    return 0;
}
void main()
{
    char str[] = "Hello";
    char str1[] = "hello";
    //int res = strcmp(str,str1); 
    int res = my_strcmp(str,str1);
    if(res == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal %d\n",res);
    }
}