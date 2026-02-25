// WAP to find the difference between sum of even and odd numbers
#include<stdio.h>
int main()
{
    int size,esum = 0, osum = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
        {
            esum += arr[i];
        }
        else
        {
            osum += arr[i];
        }
    }
    printf("%d\n",esum - osum);
    return 0;
}