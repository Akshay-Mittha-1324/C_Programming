#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    (ch >= 'A' && ch <= 'Z')? printf("The character is uppercase\n") : (ch >= 'a' && ch <= 'z')? printf("The character is lowercase\n") : printf("Invalid Character\n");
    return 0;
}