// TODO WAP to remove a character form string 'hello' 'e' 'hllo'

#include<stdio.h>
#include<string.h>
void remove_char(char str[],char ch)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            for(int j = i; str[j] != '\0' ; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("%s\n",str);
}
void main()
{
    char str[] = "Hello";
    char ch = 'e';
    remove_char(str,ch);
}