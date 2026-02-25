// WAF to print the factors of the num
#include<stdio.h>
void factor(int num)
{
    int flag = 0;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    factor(num);
    return 0;
}