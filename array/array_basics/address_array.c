#include<stdio.h>
int main()
{
    int arr[5] = {};
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    for(int i = 0; i < 6; i++)
    {
        printf("%p\t",&arr[i]);
        printf("%u\n",&arr[i]);
    }
    printf("\n");
}