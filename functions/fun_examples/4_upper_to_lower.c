// WAF to convert uppercase to lowercase
#include<stdio.h>
void upper_lower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",ch + 32);
    }
    else
    {
        printf("Invalid Character!\n");
    }
}
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    upper_lower(ch);
    return 0;
}