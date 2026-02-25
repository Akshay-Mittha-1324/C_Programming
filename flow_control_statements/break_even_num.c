#include<stdio.h>
int main()
{
    int count = 0;
    int num,upper,lower;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the Lower Range: ");
    scanf("%d",&lower);
    printf("Enter the Upper Range: ");
    scanf("%d",&upper);
    for(int i = lower; i <= upper; i++)
    {
        if( i % 2 == 0)
        {
            count++;
        }
        if(count == num)
        {
            printf("%d is the %dth Even Number!\n",i,num);
            break;
        }
    }
    return 0;
}