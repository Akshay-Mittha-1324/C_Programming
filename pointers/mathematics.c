#include<stdio.h>
int mathe(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}
int main()
{
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    mathe(&a,&b);
    printf("Sum = %d Diff = %d\n",a,b);
    return 0;
}