#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    (ch >= 'A' && ch <= 'Z')? printf("%c\n",ch + 32) : (ch >= 'a' && ch <= 'z')? printf("%c\n",ch - 32) : (ch >= '0' && ch <= '9')? printf("%c\n",ch) : printf("%c\n",ch);
    return 0;
}