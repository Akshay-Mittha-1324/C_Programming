// WAF to check if num is spy number
#include<stdio.h>
int add(int num)
{
    int digit, sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    return sum;
}
int mul(int num)
{
    int digit, mul = 1;
    while (num != 0)
    {
        digit = num % 10;
        mul *= digit;
        num = num / 10;
    }
    return mul;
}
void spy_num(int num)
{
    int a_res = add(num);
    int m_res = mul(num);
    if(a_res == m_res)
    {
        printf("%d is a Spy Number!\n",num);
    }
    else
    {
        printf("%d is not a Spy Number!\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    spy_num(num);
    return 0;
}