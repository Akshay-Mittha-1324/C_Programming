// WAF to calculate average of 3 numbers
#include<stdio.h>
void avg_3_num(int num, int num2, int num3)
{
    printf("Average is %g\n",(num + num2 + num3) / (float) 3);
}
int main()
{
    int num1,num2,num3;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg_3_num(num1,num2,num3);
    return 0;
}