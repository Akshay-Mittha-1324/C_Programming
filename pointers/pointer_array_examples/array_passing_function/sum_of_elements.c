#include<stdio.h>
void sum_of_ele(int arr[], int size)
{
    int sum = 0;
    for(int i = 0 ; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d\n",sum);
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
    sum_of_ele(arr,size);
}