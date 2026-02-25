#include<stdio.h>
int main()
{
    int i,j,rows,columns;
    printf("Enter the Rows and Columns: ");
    scanf("%d%d",&rows,&columns);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}