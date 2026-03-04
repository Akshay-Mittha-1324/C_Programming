#include<stdio.h>
void count_even(int arr[],int ind, int size, int *count)
{
    if(ind == size)
    {
        return;
    }
    if(arr[ind] % 2 == 0)
    {
        (*count)++;
    }
    ind++;
    count_even(arr,ind,size,count);
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
    int count = 0;
    count_even(arr,0,size,&count);
    printf("Even elements in the array = %d\n",count);
}