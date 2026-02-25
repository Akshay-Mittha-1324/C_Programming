/*
    WAP to find 3rd prime no. in 1 to 100
*/
#include<stdio.h>
int main()
{
    int num,flag = 0;   // char flag = 'T';
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i = 2; i < num; i++)
    {
        if( num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is Prime Number!\n",num);
    }
    else
    {
        printf("%d is not a Prime Number!\n",num);
    }
    return 0;
}