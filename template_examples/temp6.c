#include<stdio.h>
void main()
{
    char n [5];
    int a;
    int ret1, ret2;
    ret1 = scanf("%s",n); // ? abcd
    ret2 = printf("%s",n);
    printf("\nLen = %d\n",ret2);
    //printf("%d %d %d\n",a,ret1,ret2);
}