#include<stdio.h>
int main()
{
    int num,fact = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    do
    {
        while (num > 0)
        {
            fact *= num;
            num--;
        }
        
    } while (num != 0);
    printf("%d\n",fact);
    return 0;
}