// WAF to square the num
#include<stdio.h>
void sqr(int num)
{
    printf("Square = %d\n",num * num);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    sqr(num);
    return 0;
}