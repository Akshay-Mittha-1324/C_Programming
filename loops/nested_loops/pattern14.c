#include<stdio.h>
int main()
{
    char ch = 'A';
    int row;
    printf("Enter the Rows: ");
    scanf("%d",&row);
    for ( int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        ch = 'A';
        return 0;
    }
}
/*
    A B C D 
    A B C D
    A B C D
    A B C D
*/