// 9. WAP to remove duplicates in an array
#include<stdio.h>
int main()
{
    int size,count = 1,flag = 0;
    printf("Enter the Size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int unique[size];
    unique[0] = arr[0];
    for(int i = 0; i < size; i++)
    {
        flag = 0;
        for(int j = 0; j < count; j++)
        {
            if(arr[i] == unique[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            unique[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d\t",unique[i]);
    }
    printf("\n");
    return 0;
}