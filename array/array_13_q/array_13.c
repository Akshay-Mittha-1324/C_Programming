// WAP to swap 1st and last element of array
#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int shift;
    printf("Enter the number to shift the elements of array: ");
    scanf("%d",&shift);
    for(int j = 0; j < shift; j++)
    {   
        temp = arr[0];
        for(int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
            if(i == size - 1)
            {
                arr[size - 1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}