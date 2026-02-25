#include<stdio.h>
void print(int arr[], int first, int last)
{
    if(first >= last)
        return;
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
    print(arr,first+1,last-1);
}
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr,0,4);
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}