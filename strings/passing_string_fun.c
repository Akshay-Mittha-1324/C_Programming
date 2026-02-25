#include<stdio.h>
void output(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    printf("%s\n",str);
}
void print(char *str)
{
    printf("%s\n",str);
    for(int i = 0; str[i] != '\0' ; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int main()
{
    char str[] = "Hi";
    output(str);
    print(str);
}