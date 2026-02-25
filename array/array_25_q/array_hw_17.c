// WAP to replace negative numbers with zero
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}