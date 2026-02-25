// WAP to copy and print the array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int A[size],B[size];
    printf("Enter the elements of Array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < size; i++)
    {
        B[i] = A[i];
        printf("%d\t",B[i]);
    }
    printf("\n");
    return 0;
}