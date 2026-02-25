#include<stdio.h>
int main()
{
    int num,fact = 1,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num != 0)
    {
        fact *= num;
        num--; 
    }
    printf("Factorial = %d\n",fact);
    return 0;
}