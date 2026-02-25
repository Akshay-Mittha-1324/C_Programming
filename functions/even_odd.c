#include<stdio.h>
int even_odd(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int r = even_odd(num);
    if(r == 0)
    {
        printf("%d is even!\n",num);
    }
    else
    {
        printf("%d is odd!\n",num);
    }
}
int even_odd(int num)
{
    if(num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}