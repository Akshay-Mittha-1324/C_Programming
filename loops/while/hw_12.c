#include<stdio.h>
int main()
{
    int base,exponent,res = 1;
    printf("Enter the base and exponent: ");
    scanf("%d%d",&base,&exponent);
    while(exponent != 0)
    {
        res *= base;
        exponent--;
    }
    printf("Result = %d\n",res);
    return 0;
}