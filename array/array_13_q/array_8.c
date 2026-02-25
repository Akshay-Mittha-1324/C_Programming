// 8. WAP to reverse an array : i/p 4 6 2 3 o/p 3 2 6 4
#include<stdio.h>
int main()
{
    int size,temp = 0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}