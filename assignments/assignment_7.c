#include<stdio.h>
int main()
{
    int row,temp=0;
    printf("Enter the value: ");
    scanf("%d",&row);
    temp = row;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d",temp);
            temp++;
        }
        temp = row - i;
        printf("\n");
    }
    temp = 2;
    for(int i = row; i >= 1; i--)
    {
        for(int j = 2; j <= i; j++)
        {
            printf("%d",temp);
            temp++;
        }
        temp = temp - (i - 2);
        printf("\n");
    }
    return 0;
}