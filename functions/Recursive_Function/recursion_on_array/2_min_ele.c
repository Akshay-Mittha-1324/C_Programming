#include<stdio.h>
void min(int arr[],int ind, int size, int *mini)
{
    if(ind == size)
    {
        return;
    }
    if(arr[ind] < *mini)
    {
        *mini = arr[ind];
    }
    ind++;
    min(arr,ind,size,mini);
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
    int mini = arr[0];
    min(arr,1,size,&mini);
    printf("The Max value in array is = %d\n",mini);
    return 0;
}