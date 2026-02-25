#include<stdio.h>
void print(int arr[],int index, int size)
{
    if(index == size)
    {
        return;
    }
    printf("%d ",arr[index]);
    print(arr,index + 1, size);
}
void main()
{
    int arr[5] = {5, 6, 7, 8, 9};
    print(arr,0,5);
    printf("\n");
}