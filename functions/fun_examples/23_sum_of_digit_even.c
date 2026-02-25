// WAF to check sum of digits is even
#include<stdio.h>
void sum_of_digit_even(int num)
{
    int digit, sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    if(sum % 2 == 0)
    {
        printf("%d is Even Number!\n",sum);
    }
    else
    {
        printf("%d is not Even number!\n",sum);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum_of_digit_even(num);
    return 0;
}