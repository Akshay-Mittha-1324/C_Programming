#include<stdio.h>
int ele_index(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, key;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key : ");
    scanf("%d",&key);
    key = ele_index(arr,size,key);
    if(key >= 0)
    {
        printf("The element found at the index = %d\n",key);
    }
    else
    {
        printf("%d\n",key);
    }
}