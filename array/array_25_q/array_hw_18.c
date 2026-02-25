// WAP to find the difference between Maximum and Minimum
#include<stdio.h>
int main()
{
    int size,largest, smallest;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
        else if(largest < arr[i])
        {
            largest = arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("Difference = %d\n",largest - smallest);
    return 0;
}