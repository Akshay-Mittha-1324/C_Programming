// WAF to check num is -ve, +ve or zero
#include<stdio.h>
void char_check(int num)
{
    if(num == 0)
    {
        printf("The number %d is zero\n",num);
    }
    else if(num < 0)
    {
        printf("The number %d is -ve\n",num);
    }
    else
    {
        printf("The number %d is +ve\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    char_check(num);
    return 0;
}