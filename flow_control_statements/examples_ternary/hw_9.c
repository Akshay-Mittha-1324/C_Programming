#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (num % 2 == 0)? printf("Square = %d\n",num * num) : printf("Cube = %d\n",num * num * num); 
    return 0;
}