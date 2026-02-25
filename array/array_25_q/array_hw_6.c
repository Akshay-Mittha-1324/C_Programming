// WAP to check if all characters are alphabets
#include<stdio.h>
int main()
{
    int size,flag = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    char ch[size];
    printf("Enter the elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf(" %c",&ch[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("All characters are alphabets!\n");
    }
    else
    {
        printf("Not all characters are alphabets!\n");
    }
    return 0;
}