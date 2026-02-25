// 10. WAP to check the number is perfect or not.

#include<stdio.h>
int main()
{
    int num,i = 1,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Invalid Number!");
        return 0;
    }
    while (i <= num / 2)
    {
        if(num % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == num)
    {
        printf("%d is Perfect Number!\n",num);
    }
    else
    {
        printf("%d is not a Perfect Number!\n",num);
    }
    return 0;
}