#include<stdio.h>
int main()
{
    int n,count = 0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit >= 0)
        {
            count++;
        }
        n = n / 10; 
    }
    printf("Digits = %d\n",count);
    return 0;
}