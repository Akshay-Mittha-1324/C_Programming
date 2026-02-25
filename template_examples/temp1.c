#include<stdio.h>
void sum_of_num(int *num,int *sum)
{
    if(*num <= 0)
    {
        return;
    }
    *sum += *num;
    *num -= 1;
    sum_of_num(num,sum);
}

int main()
{
    int num,sum = 0,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;
    sum_of_num(&num,&sum);
    printf("Sum of 1st %d numbers is %d\n",temp,sum);
    return 0;
}