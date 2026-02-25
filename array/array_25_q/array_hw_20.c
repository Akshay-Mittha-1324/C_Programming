// WAP to Find all elements grater than number
#include<stdio.h>
int main()
{
    int size,num;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > num)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    return 0;
}