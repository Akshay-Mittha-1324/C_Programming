// 11. WAP to sum of the factorial of a number is itself   (Armstrong Number) 145 -> 1! + 4! + 5!

#include<stdio.h>
int main()
{
    int num,digit,sum = 0,fact = 1,temp;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Invalid Number!\n");
        return 0;
    }
    temp = num;
    while(num != 0)
    {
        for(int i = 1; i <= (num % 10); i++)
        {
            fact = fact * i;
        }
        sum += fact;
        fact = 1;
        num = num / 10;
    }
    if(temp == sum)
    {
        printf("Success!\n%d\n",sum);
    }
    else
    {
        printf("Failure!\n%d\n",sum);
    }
    return 0;
}