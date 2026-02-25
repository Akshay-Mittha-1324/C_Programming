#include<stdio.h>
int main()
{
    char ch;
    int row;
    printf("Enter the Rows: ");
    scanf("%d",&row);
    for ( int i = 0; i < row; i++)
    {
        ch = 'A' + i; // ch = 65 + 1;
        for (int j = 1; j <= row; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
/*
    A B C D 
    B C D E 
    C D E F 
    D E F G 
*/