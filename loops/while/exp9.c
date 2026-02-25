// 9. WAP to check the number is a palindrome or not.

#include<stdio.h>
int main()
{
    int num,rev = 0,digit,temp;
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
        printf("The number %d and %d are Palindrome!\n",rev,temp);
    }
    else
    {
        printf("The number %d and %d are not Palindrome!\n",rev,temp);
    }
    return 0;
}