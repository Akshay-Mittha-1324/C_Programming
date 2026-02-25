#include<stdio.h>
int main()
{
    int j;
    char i;
    for ( i = 'A'; i <= 'C'; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            printf("%c\t",i);
        }
        printf("\n");
    }
    return 0;
}