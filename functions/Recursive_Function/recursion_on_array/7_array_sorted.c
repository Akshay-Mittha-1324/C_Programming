#include<stdio.h>
void sorted(int arr[],int ind, int size, int *res)
{
    if(ind == size)
    {
        return;
    }
    if(arr[ind - 1] < arr[ind])
    {
        *res += 1;
    }
    ind++;
    sorted(arr,ind,size,res);
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
    int res = 0; 
    sorted(arr,1,size,&res);
    if(res == size - 1)
    {
        printf("Array is Sorted\n");
    }
    else
    {
        printf("Array is not Sorted\n");
    }
}