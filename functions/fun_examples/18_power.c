// WAF to find power of a number
#include<stdio.h>
void power(int base,int power)
{
    int res = 1;
    while(power != 0)
    {
        res *= base;
        power--;
    }
    printf("%d\n",res);
}
int main()
{
    int base, pow;
    printf("Enter the base and power: ");
    scanf("%d%d",&base,&pow);
    power(base,pow);
    return 0;
}