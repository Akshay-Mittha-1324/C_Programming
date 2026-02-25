// WAP to find the largest and smallest number
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
        if(largest < arr[i])
        {
            largest = arr[i];
        }
        else if(smallest > arr[i])
        {
            smallest = arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("Largest = %d, Smallest = %d\n",largest,smallest);
    return 0;
}