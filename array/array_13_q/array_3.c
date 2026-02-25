// 3. WAP to take the sum of array
#include<stdio.h>
int main()
{
    int size,sum = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers: ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d",sum);
    printf("\n");
    return 0;
}