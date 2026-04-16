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

#if 0

int main()
{
    char iter = 0xFF;
    int count = 0;
    for(; iter != 0; iter >>= 1)    // ? infinite loop as signed char is always gives 1 at msb
    {
        if(iter & 01)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}

#endif


#if 0
int main()
{
    unsigned char iter = 0xaa;
    int count;
    for(count = 0; iter != 0; iter >>= 1)
    {
        if(iter & 01)   // ? 1010 1010 will only and with 1 value so count is 4
        {
            count++;
        }
    }
    
    printf("%d\n",count);
    return 0;
}

#endif

#if 0

int main()
{
    unsigned char iter = 0xcd;
    int count;
    for(count = 0; iter != 0; iter >>= 1)
    {
        if(iter & 01)
            count++;
    }

    printf("%d\n",count);
    return 0;
}

#endif


#if 0

// ? Undefined Behaviour examples

int main()
{
    int x = 7, y = 7;

    x = 7 << 32;    // ? Warning -> Left shift count >= width of type

    printf("%d\n",x);

    x = y << 32;    // ? Warning -> Left shift count >= width of type    

    printf("%d\n",x);
    
    return 0;
}

#endif


#if 0

// ? Get Bit

int main()
{
    int num = 0x39;
    int pos;
    
    printf("Enter the position\n");
    scanf("%d",&pos);

    if(num & (1 << pos))    // ? (num >> pos) & 1
        printf("Bit is Set\n");
    else
        printf("Bit is Clear\n");

    return 0;
}

#endif

#if 0

int main()
{
    int num = 0x3d;
    int pos;
    scanf("%d",&pos);

    printf("%x\n",num & ((1 << pos) - 1));
    printf("%x\n", num & (~(-1 << pos)));

    return 0;
}

#endif

#if 0

int main()
{


    return 0;
}

#endif

#if 0

// ? Print the bits of a given number not efficient program

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int i;

    for(i = 31; i >= 0; i--)
    {
        if( num & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
            
    }
    printf("\n");

    return 0;
}
#endif

#if 0

// ? Print the bits of a given number efficient logic


int main()
{
    int num, i;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i = 31; i >= 0; i--)
    {
        printf("%d",(num >> i) & 1);
    }
    printf("\n");
    return 0;
}


#endif

#if 0

// ? Print the bits of a given number and count of set bits 

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int i, count = 0;

    for(i = 31; i >= 0; i--)
    {
        if( num & (1 << i))
        {
            printf("1");
            count++;
        }
        else
        {
            printf("0");
        }
            
    }
    printf("\nCount = %d\n",count);

    return 0;
}

#endif