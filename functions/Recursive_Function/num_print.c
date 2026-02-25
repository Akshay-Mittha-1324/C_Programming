#include<stdio.h>
void num_print(int num)
{
    if(num == 0)
    {
        return;
    }
    int digit;
    digit = num % 10;
    printf("%d\t",digit);   // Reverse Printing 9 7 2 1
    num_print(num / 10);
    printf("%d\t",digit);   // Forward Printing 1 2 7 9
}
int main()
{
    int n;
    scanf("%d",&n);
    num_print(n);
    printf("\n");
    return 0;
}