#include<stdio.h>
int main()
{
    int arr[4] = { -1, 0, 3, 8};
    printf("%d\n",arr[0]);
    arr[0] = 17;
    arr[2] = -2;
    for(int i = 0; i < 4; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}