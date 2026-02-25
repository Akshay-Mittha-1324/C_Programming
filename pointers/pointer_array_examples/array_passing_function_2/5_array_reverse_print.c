#include<stdio.h>
void print_rev(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void input(int arr[], int size)
{
    for(int i = 0; i < size; i++)
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
    print_rev(arr,size);
}