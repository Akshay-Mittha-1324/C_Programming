// WAF to find 2 numbers are equal or not
#include<stdio.h>
void num_equal(int num1,int num2)
{
    if(num1 == num2)
    {
        printf("Numbers %d and %d are equal\n",num1,num2);
    }
    else
    {
        printf("Numbers %d and %d are not equal!\n",num1,num2);
    }
}
int main()
{
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    num_equal(num1,num2);
    return 0;
}