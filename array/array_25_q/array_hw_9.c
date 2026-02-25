// WAP to find the average of 2 number
#include<stdio.h>
int main()
{
    int size,avg,sum = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    avg = size;
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Average = %f\n",(float) sum / avg);
    return 0;
}