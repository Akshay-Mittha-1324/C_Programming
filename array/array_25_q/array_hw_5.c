// WAP to check if the number is present in the array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num,flag = 0;
    printf("Enter the number to check in the array: ");
    scanf("%d",&num);
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            flag = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag == 1)
    {
        printf("%d number found in array!\n",num);
    }
    else
    {
        printf("%d number not found in array!\n",num);
    }
    return 0;
}