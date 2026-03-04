#include<stdio.h>
int search(int arr[],int ind,int key, int size)
{
    int flag = 0;
    if(ind == size)
    {
        return 0;
    }
    if(arr[ind] == key)
    {
        flag = 1;
        return flag;
    }
    ind++;
    search(arr,ind,key,size);
}
void main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    int res = search(arr,0,key,size);
    if(res == 1)
    {
        printf("Yes the key is present\n");
    }
    else
    {
        printf("The key is not present\n");
    }
}