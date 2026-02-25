#include<stdio.h>
void convert(int n)
{
    if(n == 0)
    {
        return;
    }
    convert(n / 2);
    printf("%d",n % 2);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    convert(n);
    printf("\n");
    return 0;
}