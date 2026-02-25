// WAP to check if array is palindrome or not
#include<stdio.h>
int main()
{
    int size,temp,flag = 0;
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
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
        if(arr[i] == arr[size - i - 1])
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
        printf("Array is Palindrome!\n");
    }
    else
    {
        printf("Array is not a Palindrome!\n");
    }
    return 0;
}