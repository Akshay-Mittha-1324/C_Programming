// WAF to check num is palindrome or not
#include<stdio.h>
void pal(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    pal(num);
    return 0;
}
void pal(int num)
{
    int digit,rev = 0,temp = num;
    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if(rev == temp)
    {
        printf("%d is Palindrome!\n",rev);
    }
    else
    {
        printf("%d is not a Palindrome!\n",temp);
    }
}