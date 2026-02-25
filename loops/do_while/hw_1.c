#include<stdio.h>
int main()
{
    int num,i = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    do
    {
        if(num == 0)
        {
            printf("N must be greater than or equal to 1\n");
            break;
        }
        printf("%d\n",i);
        i++;
        num--;
    } while (num > 0);
    
    return 0;
}