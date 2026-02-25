// WAF to find max number between 2 numbers
#include<stdio.h>
void max_num(int num1,int num2)
{
    if(num1 > num2)
    {
        printf("Largest Number is %d\n",num1);
    }
    else
    {
        printf("Largest Number is %d\n",num2);
    }
}
int main()
{
    int num1, num2;
    printf("Enter the 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    max_num(num1,num2);
    return 0;
}