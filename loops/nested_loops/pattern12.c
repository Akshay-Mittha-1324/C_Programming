#include<stdio.h>
int main()
{
    int row;
    printf("Enter the Row: ");
    scanf("%d",&row);
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
/*

 *_*_
 _*_*
 *_*_
 _*_*

*/