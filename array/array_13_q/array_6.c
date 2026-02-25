// 6. WAP to find the difference between largest number and smallest number: i/p 2 4 5 6 o/p 6 - 2 = 4
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers: ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0], smallest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
        else if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    printf("The difference between Largest %d and Smallest %d : %d\n",largest,smallest,largest - smallest);
    return 0;
}