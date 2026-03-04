#include<stdio.h>
void count_odd(int arr[],int ind, int size, int *count)
{
    if(ind == size)
    {
        return;
    }
    if(arr[ind] % 2)
    {
        (*count)++;
    }
    ind++;
    count_odd(arr,ind,size,count);
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
    count_odd(arr,0,size,&count);
    printf("Odd elements in the array = %d\n",count);
}