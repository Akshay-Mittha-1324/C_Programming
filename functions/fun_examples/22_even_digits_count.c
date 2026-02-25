// WAF to count even digits in num
#include<stdio.h>
void even_digits_count(int num)
{
    int digit, count = 0;
    while (num != 0)
    {
        digit = num % 10;
        if(digit % 2 == 0)
        {
            count++;
        }
        num = num / 10;
    }
    printf("The Even numbers are %d\n",count);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    even_digits_count(num);
    return 0;
}