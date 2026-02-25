#include<stdio.h>
void max_val(int arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max = %d\n",max);
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
    max_val(arr,size);
}