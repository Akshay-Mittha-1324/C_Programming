#include<stdio.h>
void maximum(int arr[],int max, int index, int size)
{
    if(index == size)
    {
        printf("Max Value = %d\n",max);
        return;
    }
    if(arr[index] > max)
        max = arr[index];
    maximum(arr, max, index + 1, size);
}
void main()
{
    int arr[5] = {10, 2, 3, 4, 5};
    maximum(arr,arr[0],0,5);
    // !
    // *
    // ?
    // t_o_d_o
}