// WAF to find the factorial of num
#include<stdio.h>
void factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial = %d\n",fact);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    factorial(num);
    return 0;
}