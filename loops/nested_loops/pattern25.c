#include<stdio.h>
int main()
{
    int n;
    char ch = 'A';
    printf("Enter the value: ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j <= n / 2)
            {
                printf("%c ",ch);
            }
            else
            {
                ch++;
                printf("%c ",ch);
                ch--;
            }
        }
        ch += 2;
        printf("\n");
    }
    return 0;
}