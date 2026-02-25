#include<stdio.h>
void main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
    {
        printf("The year %d is a Leap Year!\n",year);
    }
    else
    {
        printf("The year %d is not a Leap Year!\n",year);
    }
}