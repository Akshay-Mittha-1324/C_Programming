// 5. WAP to find the largest number from an array
#include<stdio.h>
int main()
{
    int size,largest = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers: ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(largest > arr[i])
        {
            continue;
        }
        else
        {
            largest = arr[i];
        }
    }
    printf("The largest element is : %d\n",largest);
    return 0;
}