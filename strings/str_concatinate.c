#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    int size = strlen(str1) + strlen(str2) + 1;
    char res[size];
    for(int i = 0; i < size; i++)
    {
        res[i] = str1[i];
        res[(size/2) + i] = str2[i];
        printf("%c",res[i]);
    }
    printf("\n");
    res[size] = '\0';
    printf("%s\n",res);
}