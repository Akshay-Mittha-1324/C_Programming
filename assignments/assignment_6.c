#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the n value: ");
    scanf("%d",&n);
    printf("Enter the m value: ");
    scanf("%d",&m);
    for(int i = 1; i < n; i++)
    {
        if(i > m && i < n - m)
        {
            printf("*");
        }
        else
        {
            printf("$");
        }
    }
    printf("\n");
    return 0;
}