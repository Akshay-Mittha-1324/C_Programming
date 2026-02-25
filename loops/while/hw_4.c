#include<stdio.h>
int main()
{
    int n,rev = 0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Reverse = %d\n",rev);
    return 0;
}