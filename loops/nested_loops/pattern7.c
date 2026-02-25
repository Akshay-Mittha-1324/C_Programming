#include<stdio.h>
int main()
{
    int i,j,row,column;
    printf("Enter the Rows and Columns: ");
    scanf("%d%d",&row,&column);
    for(i = 0; i < row; i++)
    {
        for(j = 1; j <= column; j++)
        {
            printf("%d",i+j);    
        }
        printf("\n");
    }
    return 0;
}