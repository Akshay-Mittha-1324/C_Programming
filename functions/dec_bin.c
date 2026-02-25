#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        printf("%d",num % 2);
        num /= 2;
    }
    printf("\n");
    return 0;
}