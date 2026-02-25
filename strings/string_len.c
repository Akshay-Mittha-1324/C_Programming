#include<stdio.h>
#include<string.h>
void main()
{
    char str[] = "Hello";
    printf("%zu\n",sizeof(str));
    printf("%u\n",strlen(str));
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n",count);
}