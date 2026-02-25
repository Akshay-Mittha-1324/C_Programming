// WAP to check if array is sorted or not
#include<stdio.h>
int main()
{
    int size,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < arr[i + 1] || arr[i - 1] < arr[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Array is sorted!\n");
    }
    else
    {
        printf("Array is not sorted!\n");
    }
    return 0;
}