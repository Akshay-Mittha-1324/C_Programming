// WAF to check sum of square of digits is prime or not
#include<stdio.h>
int sum_of_sqr(int num)
{
    int digit,sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit * digit;
        num = num / 10;
    }
    return sum;
}
void sqr_prime(int num)
{
    int flag = 0;
    int res = sum_of_sqr(num);
    for(int i = 2; i < res; i++)
    {
        if(res % i == 0)
        {
            flag = 1;
            break;
        }
    }   
    if(flag == 0)
    {
        printf("%d is Prime Number!\n",res);
    }
    else
    {
        printf("%d is not Prime Number!\n",res);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sqr_prime(num);
    return 0;
}