// 10. WAP to find the number with maximum frequency i/p 1 2 3 3 4 4 4 8 8 o/p largest frequent no is 4 and repeated 3 times
#include<stdio.h>
int main()
{
    int size,count,largest = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,freq;
    for(int i = 0; i < size; i++)
    {
        key = arr[i];
        for(int j = i + 1; j <= size; j++)
        {
            count = 1;
            if(key == arr[j])
            {
                count++;
            }
            if(freq < count)
            {
                freq = count;
                largest = arr[j];
            }
        }
    }
    printf("%d occured %d times\n",largest,freq);
    return 0;
}