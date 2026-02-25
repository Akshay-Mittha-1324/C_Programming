// 12. WAP to check the array is palindrome or not
#include<stdio.h>
int main()
{
    int size, temp,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size / 2; i++)
    {
        if(arr[i] != arr[size - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Array is Palindrome!\n");
    }
    else
    {
        printf("Array is not a Palindrome!\n");
    }
    return 0;
}