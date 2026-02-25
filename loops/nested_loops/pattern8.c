#include<stdio.h>
int main()
{
    int i,j,row,column;
    printf("Enter the Rows and Columns: "); //take one variable
    scanf("%d%d",&row,&column);
    for(i = row + 1; i > 1; i--)    // n + 1 
    {
        // num = n - i + 1
        for(j = 1; j <= column; j++)
        {
            printf("%d\t",i - j);    // n - i // num
            //num--
        }
        printf("\n");
    }
    return 0;
}