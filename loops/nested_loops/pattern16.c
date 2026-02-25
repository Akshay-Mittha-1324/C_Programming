#include<stdio.h>
int main()
{
    int row;
    printf("Enter the Rows: ");
    scanf("%d",&row);

    // Method 1

    for ( int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if(i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    // Method 2

    for(int i = row; i >= 1; i--)
    {
        for(int j = row; j >= 1; j--)
        {
            if(i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*
    *   
     *  
      * 
       *
*/