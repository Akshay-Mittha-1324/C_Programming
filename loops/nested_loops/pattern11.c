#include<stdio.h>
int main()
{
    for(int i = 'A' - 1;i < 'C';i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("%c",i + j);
        }
        printf("\n");
    }
    return 0;
}