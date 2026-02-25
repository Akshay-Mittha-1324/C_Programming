/*
    Continue

    WAP to print the prime numbers between 1 and 100 and skip the 5th prime no.
*/
#include<stdio.h>
int main()
{
    int flag = 0,count = 0;
    for(int i = 2; i <= 100; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
            if(count == 5)
            {
                continue;
            }
            printf("%d ",i);
        }
        flag = 0;
    }
    printf("\n");
    return 0;
}