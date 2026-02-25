// WAP to count the occurance of number
#include<stdio.h>
int main()
{
    int size,num,count = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            count++;
        }
    }
    printf("%d occurs %d times\n",num,count);
    return 0;
}