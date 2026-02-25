#include<stdio.h>
int main()
{
    int arr[4] = { 4, 1};
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int arr1[4] = {};
    for(int i = 0; i < 4 ; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    return 0;
}