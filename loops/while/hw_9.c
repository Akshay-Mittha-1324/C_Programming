#include<stdio.h>
int main()
{
    int num,digit,temp,rev = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp = num;
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if(temp == rev)
    {
        printf("Palindrome!\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    return 0;
}