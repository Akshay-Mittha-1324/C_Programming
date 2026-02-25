#include<stdio.h>
int main()
{
    int num,num1 = 2,flag = 0,i;
    printf("Enter the limit: ");
    scanf("%d",&num);
    for(i = 2; i < num; i++)
    {
        if(num1 % i == 0)
        {
            flag = 1;
        }
        if(flag == 0)
        {
            printf("%d, ",num1);
        }
        num1++;
        flag = 0;
    }
    printf("\n");
    return 0;
}