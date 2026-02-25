// WAP to square each element of an array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        arr[i] = arr[i] * arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}