#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    char str[size];
    scanf(" %[^\n]s",str);
    for(int i = 0; str[i] != '\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}