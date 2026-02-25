// WAP to Count pairs with given sum
#include<stdio.h>
int main()
{
    int size,sum,count = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                count++;
            }
            
        }
    }
    return 0;
}