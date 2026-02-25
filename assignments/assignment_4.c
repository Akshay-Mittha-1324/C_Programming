#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num < 0 )
    {
        printf("Invalid Number!\n");
        return 0;
    }
    for(int i = 1; i <= num /2 ; i++)
    {
        if( num % i == 0)
        {
            sum += i;
        }
    }
    if( num == sum)
    {
        printf("The number %d is Perfect Number!\n",num);
    }
    else
    {
        printf("The number %d is not A Perfect Number!\n",num);
    }
    return 0;
}