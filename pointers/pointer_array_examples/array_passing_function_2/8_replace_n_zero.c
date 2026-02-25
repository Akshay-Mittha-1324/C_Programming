#include<stdio.h>
void replace_n_z(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = -1;
        }
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    replace_n_z(arr,size);
    return 0;
}