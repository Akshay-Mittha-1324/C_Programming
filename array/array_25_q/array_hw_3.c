// WAP to count the uppercase and lowercase characters
#include<stdio.h>
int main()
{
    int size,ucount = 0, lcount = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    char ch[size];
    printf("Enter the elements of array: ");
    for(int i = 0; i < size; i++)
    {
        scanf(" %c",&ch[i]);
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ucount += 1;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            lcount += 1;
        }
    }
    printf("Uppercase = %d , Lowercase = %d\n",ucount,lcount);
    return 0;
}