#include<stdio.h>
void right_shift(int arr[], int size)
{
    int temp = arr[size - 1];
    for(int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for(int i = 0 ; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    right_shift(arr,size);
}