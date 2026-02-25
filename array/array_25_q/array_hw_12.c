// WAP to count frequency of all elements
#include<stdio.h>
int main()
{
    int size,key,count = 0;
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
        key = arr[i];
        for(int j = 0; j < size; j++)
        {
            if(key == arr[j])
            {
                count++;
            }
        }
        printf("%d:%d times\n",key,count);
        count = 0;
    }
    printf("\n");
    return 0;
}