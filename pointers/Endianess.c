#include<stdio.h>
void main()
{
    int num = 0x12345680;
    int *ptr = &num;
    printf("%hhX\n",*ptr);
    unsigned char *cptr = &num;
    if(*cptr == 0x80)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
}