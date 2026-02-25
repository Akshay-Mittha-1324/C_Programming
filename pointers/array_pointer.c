#include<stdio.h>
void print(int arr[], int size)
{
    arr[0] = 7;
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
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
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]); // Using the array format
    }
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",*arr + i); // Using the pointer format
    }
    printf("\n");
    print(arr,size);
}