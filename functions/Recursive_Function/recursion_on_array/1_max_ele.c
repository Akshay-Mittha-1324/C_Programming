#include<stdio.h>
void max(int arr[],int ind, int size, int *maxi)
{
    if(ind == size)
    {
        return;
    }
    if(arr[ind] > *maxi)
    {
        *maxi = arr[ind];
    }
    ind++;
    max(arr,ind,size,maxi);
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxi = arr[0];;
    max(arr,1,size,&maxi);
    printf("The Max value in array is = %d\n",maxi);
    return 0;
}