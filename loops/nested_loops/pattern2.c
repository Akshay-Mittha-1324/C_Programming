#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <= 5; i++)
    {
        // Rows = i
        for(j = 1; j <= 5; j++)
        {
            printf("*");    // Columns = j
        }
        printf("\n");
    }
    return 0;
}