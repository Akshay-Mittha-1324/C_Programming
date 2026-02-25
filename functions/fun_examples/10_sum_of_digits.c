// WAF to find sum of digits
#include<stdio.h>
void sum_of_dig(int num)
{
    int digit, sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("Sum of Digits is %d\n",sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum_of_dig(num);
    return 0;
}