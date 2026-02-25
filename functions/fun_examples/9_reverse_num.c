// WAF to reverse a num
#include<stdio.h>
void reverse_num(int num)
{
    int digit,rev = 0;
    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("Reverse = %d\n",rev);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    reverse_num(num);
    return 0;
}