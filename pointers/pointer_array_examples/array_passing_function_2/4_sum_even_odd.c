#include<stdio.h>
#include<stdlib.h>
int sum_even_odd_diff(int arr[], int size)
{
    int e_sum = 0, o_sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2)
        {
            o_sum += arr[i];
        }
        else
        {
            e_sum += arr[i];
        }
    }
    return e_sum - o_sum;
}
void input(int arr[], int size)
{
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    size = sum_even_odd_diff(arr,size);
    printf("Difference between sum of even and odd elements = %d\n",abs(size));
    return 0;
}