#include<stdio.h>
void num_occurred(int arr[], int size, int num)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
            count++;
    }
    printf("%d occurred %d times\n",num,count);
}
int main()
{
    int size,num;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    num_occurred(arr,size, num);
}