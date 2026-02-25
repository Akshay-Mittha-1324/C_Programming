// WAP to find the index of given number
#include<stdio.h>
int main()
{
    int size,num,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the nubmer: ");
    scanf("%d",&num);
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            printf("%d",i);
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
        printf("-1");
    }
    printf("\n");
    return 0;
}