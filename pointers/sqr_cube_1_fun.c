// WAP to take the square and cube of no. in an single function
#include<stdio.h>
int sqr_cube(int *num, int *num1)
{
    *num *= *num;
    *num1 = *num1 * *num1 * *num1;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num1 = num;
    sqr_cube(&num,&num1);
    printf("Square = %d\nCube = %d\n",num,num1);
    return 0;
}