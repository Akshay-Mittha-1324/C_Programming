/*
    WAP to print the first no. which is divisible by 6 in the range of 1 to 10;
*/
#include<stdio.h>
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if( i % 6 == 0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}