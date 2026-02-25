// WAP to swap first and last element of an array
#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size / 2; i++)
    {
        if(i == 0)
        {
            temp = arr[i];
            arr[i] = arr[size - 1];
            arr[size - 1] = temp;
        
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}