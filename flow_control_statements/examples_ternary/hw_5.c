#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    (ch >= 'A' && ch <= 'Z')? printf("Uppercase Letter\n") : (ch >= 'a' && ch <= 'z')? printf("Lowercase Letter\n") : (ch >= '0' && ch <= '9')? printf("Digit\n") : printf("Special Character\n");
    return 0;
}