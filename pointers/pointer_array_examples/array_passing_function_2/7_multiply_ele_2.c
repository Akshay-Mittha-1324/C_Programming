#include<stdio.h>
void ele_mul(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
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
    ele_mul(arr,size);
    return 0;
}