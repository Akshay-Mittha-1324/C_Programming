// WAP to check if array contains dublicates
#include<stdio.h>
int main()
{
    int size,count = 0;
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
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    if(count != 0)
    {
        printf("Contains Dublicates!\n");
    }
    else
    {
        printf("No dublicates found!\n");
    }
    return 0;
}