#include<stdio.h>

void main()
{
    int n = 0x123456789;
    printf("%#X\n",n); // 0xA
    printf("%#o\n",n); // 012
    printf("%d\n",n); // 10
}