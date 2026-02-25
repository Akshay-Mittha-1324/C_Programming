// WAP to shift character to next ascii value
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    char ch[size];
    printf("Enter the characters in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf(" %c",&ch[i]);
        ch[i] = ch[i] + 1;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%c\t",ch[i]);
    }
    printf("\n");
    return 0;
}