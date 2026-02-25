// 4. WAP to remove an element from an array
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
    int key;
    printf("Enter the elemet to remove: ");
    scanf("%d",&key);
    for(int i = 0; i < size; i++)
    {
        if(key == arr[i])
        {
            for(int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    for(int i = 0 ; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}