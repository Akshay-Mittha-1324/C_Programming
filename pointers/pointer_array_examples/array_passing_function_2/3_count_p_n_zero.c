#include<stdio.h>
void count_ele_type(int arr[], int size)
{
    int z_count = 0, p_count = 0, n_count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            n_count++;
        }
        else if(arr[i] == 0)
        {
            z_count++;
        }
        else
        {
            p_count++;
        }
    }
    printf("Positive elements = %d\nNegative elements = %d\nZero elements = %d\n",p_count,n_count,z_count);
}
void input(int *arr, int size)
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
    count_ele_type(arr,size);
    return 0;
}