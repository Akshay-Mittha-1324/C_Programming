#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (num % 10)? printf("The number is not a multiple of 10\n") : printf("The number is a multiple of 10\n");
    return 0;
}