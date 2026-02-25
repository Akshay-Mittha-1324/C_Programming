#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Row: ");
    scanf("%d",&n);

    // Method 1

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*

    *
    * *
    * * *
    * * * *

*/