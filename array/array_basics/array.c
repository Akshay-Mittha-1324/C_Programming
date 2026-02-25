#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("%d\n",sizeof(arr));
    return 0;
}