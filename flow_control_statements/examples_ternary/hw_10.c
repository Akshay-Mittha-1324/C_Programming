#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    (a > b && a > c )? printf("%d\n",a) : (b > c && b > a)? printf("%d\n",b) : printf("%d\n",c);
    return 0;
}