#include<stdio.h>
void avg(int arr[], int size)
{
    int sum = 0;
    float avg;
    for(int i = 0 ; i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / (float) size;
    printf("Avg = %g\n",avg);
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
    avg(arr,size);
}