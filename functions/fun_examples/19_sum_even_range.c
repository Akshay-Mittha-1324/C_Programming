// WAF to check num is even and < 100
#include<stdio.h>
void even_range(int num)
{
    if((num % 2 == 0) && (num < 100))
    {
        printf("%d is even and within range of 100\n",num);
    }
    else
    {
        printf("%d is not even\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    even_range(num);
    return 0;
}