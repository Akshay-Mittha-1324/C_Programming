#include<stdio.h>
int prime1(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void prime(int num)
{
    int flag = 0;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    prime(num);
    int r = prime1(num);
    if(r == 1)
    {
        printf("%d is a prime number!\n",num);
    }
    else
    {
        printf("%d is not a prime number!\n",num);
    }
}