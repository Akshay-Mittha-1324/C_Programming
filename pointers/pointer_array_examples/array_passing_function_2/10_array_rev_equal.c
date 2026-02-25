#include<stdio.h>
void rev_equal(int arr[], int size, int arr1[])
{
    int flag = 0;
    for(int i = 0; i < size / 2; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr1[size - i - 1];
        arr1[size - i - 1] = temp;
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != arr1[i])
        {
            flag = 1;
            break;
        }   
    }
    if(flag == 0)
    {
        printf("Arrays are reverse of each other\n");
    }
    else
    {
        printf("Arrays are not reverse of each other\n");
    }
}
void input(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size], arr1[size];
    input(arr,size);
    input(arr1,size);
    rev_equal(arr,size,arr1);
    return 0;
}