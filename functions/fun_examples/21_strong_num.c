// WAF to check num is a strong number
#include<stdio.h>
void strong_num(int num)
{
    int fact = 1, digit,sum = 0,temp = num;
    while (num != 0)
    {
        digit = num % 10;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        num = num / 10;
    }
    if(temp == sum)
    {
        printf("%d is a strong number!\n",temp);
    }
    else
    {
        printf("%d is not a strong number!\n",temp);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    strong_num(num);
    return 0;
}