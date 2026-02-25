#include<stdio.h>
int main()
{
    int size1,size2,flag = 0,count;
    printf("Enter the array1 size: ");
    scanf("%d",&size1);
    printf("Enter the array2 size: ");
    scanf("%d",&size2);
    printf("Enter the array1 elements: ");
    if(size1 != size2)
    {
        printf("Array size are not equal!");
        return 0;
    }
    int arr1[size1],arr2[size2];
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements: ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i = 0; i < size1; i++)
    {
        flag = 0;
        for(int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }
    if(count == size1)
    {
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
    return 0;
}