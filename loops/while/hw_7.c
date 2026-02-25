#include<stdio.h>
int main()
{
    int num,dig,digit,count = 0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("Enter the Digit: ");
    scanf("%d",&dig);
    while(num != 0)
    {
        digit = num % 10;
        if(digit == dig)
        {
            count++;
        }
        num = num / 10;
    }
    printf("Digit %d appears %d times\n",dig,count);
    return 0;
}