#include<stdio.h>
int main()
{
    int n,ch = 'A';
    printf("Enter the value: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if( j <= i)
                printf("%c ",ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}