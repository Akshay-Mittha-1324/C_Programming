// 7. WAP to take the sum of even digits number.
#include<stdio.h>
int main()
{
    int num,sum = 0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num != 0)
    {   
        digit = num % 10;
        if(num % 2 == 0)
        {
            sum += digit;
        }
        num = num / 10;
    }
    printf("Sum = %d\n",sum);
    return 0;
}