// WAF to find sum of even numbers from 1 to n
#include<stdio.h>
void sum_of_even(int num)
{
    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    printf("Sum of Even Numbers: %d\n",sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum_of_even(num);
    return 0;
}