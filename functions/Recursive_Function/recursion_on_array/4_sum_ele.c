#include<stdio.h>
void sum(int arr[], int ind, int size)
{
    if(ind == size)
    {
        return;
    }
    arr[ind] = arr[ind] * arr[ind];
    ind++;
    sum(arr,ind,size);
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
    sum(arr,0,size);
    for(int i = 0 ; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}