#include<stdio.h>
void input(int arr[])
{
    for(int i = 0; i < 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output(int arr[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void update(int arr[])
{
    arr[0] = 10;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    int arr[5];
    input(arr);
    output(arr);
    update(arr);
    output(arr);
    printf("%d\t%d\n",a,b);
    swap(&a,&b);
    printf("%d\t%d\n",a,b);
    return 0;
}