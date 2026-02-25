// 11. WAp to check two arrays are equal or not
#include<stdio.h>
int main()
{
    int size,flag = 0;
    printf("Enter the Size: ");
    scanf("%d",&size);
    int arr1[size];
    printf("Enter the numbers in 1st array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    printf("Enter the numbers in 2nd array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(arr1[i] != arr2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == size)
    {
        printf("Arrays are equal\n");
    }
    else
    {
        printf("Arrays are not equal\n");
    }
    
    return 0;
}