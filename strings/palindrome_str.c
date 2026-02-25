// TODO WAP to check the string is palindrome or not    "madam"

#include<stdio.h>
#include<string.h>
void palindrome(char str[])
{
    char temp;
    int size = strlen(str);
    int flag = 0;
    for(int i = 0; i < size / 2; i++)
    {
        if(str[i] != str[size- i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
void main()
{
    char str[] = "madam";
    palindrome(str);
}