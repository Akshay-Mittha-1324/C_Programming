#include<stdio.h>
void arr_equal(int arr1[], int size1, int arr2[])
{
    int flag = 0;
    for(int i = 0; i < size1; i++)
    {
        if(arr1[i] != arr2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Arrays are equal\n");
    }
    else
    {
        printf("Arrays are not equal\n");
    }
}
int main()
{
    int size1,size2;
    scanf("%d",&size1);
    scanf("%d",&size2);
    if(size1 != size2)
    {
        printf("Size not equal\n");
        return 0;
    }
    int arr1[size1],arr2[size2];
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    arr_equal(arr1,size1,arr2);
}