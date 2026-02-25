// WAP to shift array elements one time to left
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
    temp = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            arr[size - 1] = temp;
        }
        else
        {
            arr[i] = arr[i + 1];
        }
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}