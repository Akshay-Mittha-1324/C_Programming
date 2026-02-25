#include<stdio.h>
int main()
{
    int fab = 0,n,num1 = 0,num2 = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n > 0)
    {
        printf("Invalid input");
        return 0;
    }
    while(fab >= n)
    {
        printf("%d ",fab);
        num1 = num2;
        num2 = fab;  
        fab = num1 - num2; 
    }
    printf("\n");
    return 0;
}
/*

*/