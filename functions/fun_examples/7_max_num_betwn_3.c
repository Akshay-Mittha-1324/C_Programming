// WAF to find max number between 3 numbers
#include<stdio.h>
void max_3_num(int num1,int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        printf("%d is Maximum\n",num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("%d is Maximum\n",num2);
    }
    else
    {
        printf("%d is Maximum\n",num3);
    }
}
int main()
{
    int num1, num2, num3;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    max_3_num(num1,num2,num3);
    return 0;
}