#include<stdio.h>

#if 0

// ? Bitwise & , | , ^ , ~

int main()
{
    char a = 0x67, b = 0x39;

    printf("%#hhX %#hhX %#hhX %#hhX %#hhX\n",a & b, a | b, a ^ b, ~a, ~b);
    return 0;
}

#endif

#if 0

// ? Bitwise Shift Operators

int main()
{
    int num = 14;

    printf("%d %d %d\n",num , (num << 1), (num << 2));

    unsigned int n = 56;

    printf("%u %u %u\n",n , (n >> 1), (n >> 2));

    int a = -14;

    printf("%d %d %d\n",a , (a >> 1), (a >> 2));

    return 0;
}
#endif

#if 0

int main()
{
    int n = 39, n1 = -39, n2 = -1;
    unsigned int u = 255;

    printf("%d %d %d\n%d %d %d\n%u %u %u\n%d %d %d\n",n, (n >> 1), (n >> 2), n1, (n1 >> 1), (n1 >> 2), u, (u >> 1), (u >> 2),n2, (n2 >> 1), (n2 >> 2));

    return 0;
}

#endif

#if 0

int main()
{
    int iter = 0xff, count = 0;

    for(; iter; iter >>= 1)
        if(iter & 01)
            count++;

    printf("%d\n",count);

    return 0;
}

#endif
