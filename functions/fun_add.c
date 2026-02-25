#include<stdio.h>
int sum(int, int);
int main()
{
    int n1 = 10, n2 = 20;
    int r = sum(n1,n2);
    printf("%d\n",r);
    return 0;
}
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}