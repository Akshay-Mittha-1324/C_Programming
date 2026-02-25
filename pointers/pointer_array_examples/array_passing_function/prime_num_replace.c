#include<stdio.h>
void neg_with_zero(int arr[], int size)
{
    int flag = 0;
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
        }
        if(flag == 0)
        {
            arr[i] = -1;
        }
    }
    for(int i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
void main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    neg_with_zero(arr,size);
}