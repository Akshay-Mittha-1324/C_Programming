#include<stdio.h>
int main()
{
    int i;
    char j;
    for(i = 1; i <= 4; i++)
    {   
        for(j = 'A'; j <= 'D'; j++)
        {
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}