// WAF to find sum of first n natural numbers
#include<stdio.h>
void sum_nat(int num)
{
    int sum = 0;
    for(int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum = %d\n",sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum_nat(num);
    return 0;
}