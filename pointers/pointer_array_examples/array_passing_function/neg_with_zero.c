#include<stdio.h>
void neg_with_zero(int arr[], int size)
{
    for(int i = 0 ; i < size; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
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
    neg_with_zero(arr,size);
}