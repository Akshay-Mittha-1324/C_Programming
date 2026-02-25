// 7. WAP to print the prime number from an array
#include<stdio.h>
int main()
{
    int size,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers: ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The prime numbers are: ");
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 2; j < arr[i]; j++)
        {
            if( arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}