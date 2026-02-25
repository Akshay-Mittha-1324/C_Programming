#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (num >= 0 && num <= 10)? printf("within range\n") : printf("out of range\n");
    return 0;
}