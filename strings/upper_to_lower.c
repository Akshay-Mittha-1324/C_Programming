
// TODO WAP to convert uppercase to lowercase & lowercase to uppercase

#include<stdio.h>
void convert(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s\n",str);
}
void main()
{
    char str[] = "Hello";
    convert(str);
}