// WAP to print all prime number in an array
#include<stdio.h>
int main()
{
    int size,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        flag = 0;
        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag == 0)
        {
            printf("%d\t",arr[i]);
        }
        else
        {
            continue;
        }
    }
    printf("\n");
    return 0;
}