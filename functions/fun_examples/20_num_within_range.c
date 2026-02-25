// WAF to check the num is in range 50 - 100
#include<stdio.h>
void num_within_range(int num)
{
    if(num > 50 && num < 100)
    {
        printf("Number %d is within range of 50 and 100\n",num);
    }
    else
    {
        printf("Number %d is not within range\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    num_within_range(num);
    return 0;
}