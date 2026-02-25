// WAP to count Positive , Negative and Zero elements
#include<stdio.h>
int main()
{
    int size,pcount = 0, ncount = 0, zcount = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            ncount++;
        }
        else if(arr[i] == 0)
        {
            zcount++;
        }
        else
        {
            pcount++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n",pcount,ncount,zcount);
    return 0;
}