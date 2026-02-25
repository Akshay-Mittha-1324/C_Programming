// 8. WAP to reverse a number 
#include<stdio.h>
int main()
{
    int num,rev = 0,digit;
    printf("Enter the Number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("%d\n",rev);
    return 0;
}