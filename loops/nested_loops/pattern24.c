#include<stdio.h>
int main()
{
    int n,ch = 'A';
    printf("Enter the value: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        ch = 'A' + i;
        for(int j = 1; j <= n ; j++)
        {
            if(j <= n / 2)
            {
                printf("%c ",ch);
                ch++;
            }
            else
            {
                ch--;
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}