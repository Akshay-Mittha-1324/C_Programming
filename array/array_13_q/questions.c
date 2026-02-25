/*
1. WAP to print only even numbers from an array
2. WAP to search the number in an array i/p 3 4 5 6 7 key = 3 o/p found if key -1 o/p not found
3. WAP take the sum of array
4. WAP to remove an element from an array
5. WAP to find the largest number from an array
6. WAP to find the difference between largest number and smallest number: i/p 2 4 5 6 o/p 6 - 2 = 4
7. WAP to print the prime number from an array
8. WAP to reverse an array : i/p 4 6 2 3 o/p 3 2 6 4
9. WAP to remove duplicates in an array
10. WAP to find the number with maximum frequency i/p 1 2 3 3 4 4 4 8 8 o/p largest frequent no is 4 and repeated 3 times
11. WAp to check two arrays are equal or not
12. WAP to check the array is palindrome or not
13. WAP 
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers: ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The even numbers in array are: ");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    return 0;
}