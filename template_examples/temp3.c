// Remove dublicates from an array.
#include<stdio.h>
int main()
{
    int size,flag = 0,count = 1;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size],uniq_array[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    uniq_array[0] = arr[0];
    for(int i = 1; i < size; i++)
    {
        flag = 0;
        for(int j = 0; j < count; j++)
        {
            if(arr[i] == uniq_array[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            uniq_array[count] = arr[i];
            count++;
        }
    }
    printf("Unique array elements: ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ",uniq_array[i]);
    }
    printf("\n");
    return 0;
}