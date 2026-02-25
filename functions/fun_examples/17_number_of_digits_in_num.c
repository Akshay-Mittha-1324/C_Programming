// WAF to calculate no. of digits in a number
#include<stdio.h>
void num_of_digits(int num)
{
    int digit, count = 0;
    while (num != 0)
    {
        digit = num % 10;
        count++;
        num = num / 10;
    }
    printf("Number of digits in number: %d\n",count);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    num_of_digits(num);
    return 0;
}