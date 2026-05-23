/*
    Unions
    - Shared memory space (memory allocation to largest member of the union)
    - Value of union is last updated value
    - Modify one affects all the other members
    - Single memory block that can be used for different type of data

*/

#include<stdio.h>

#if 0
union Test
{
    char ch;
    int id;
    double height;
};

int main()
{
    union Test temp;
    printf("%zu\n\n",sizeof(temp));

    temp.height = 7.2;
    printf("Height : %lf\n\n",temp.height);

    temp.id = 0x1234;
    printf("Id : %x\n",temp.id);
    printf("Height : %lf\n\n",temp.height);

    temp.ch = '1';
    printf("Ch : %x %c\n",temp.ch,temp.ch);
    printf("Id : %x\n",temp.id);
    printf("Height : %lf\n\n",temp.height);
    return 0;
}

#endif

#if 0

union FloatBits
{
    float degree;
    struct 
    {
        unsigned m  : 23;
        unsigned e  : 8;
        unsigned s  : 1;
    }elements;
};

int main()
{
    union FloatBits fb = {3.2};

    printf("%f\n\n",fb.degree);
    printf("Sign : %x\n",fb.elements.s);
    printf("Exponent : %x\n",fb.elements.e);
    printf("Mantissa : %x\n\n",fb.elements.m);
    fb.elements.s = 1;
    printf("%f\n",fb.degree);
    return 0;
}

#endif

#if 0

union Endian
{
    unsigned int value;
    unsigned char byte[4];  
};

int main()
{
    union Endian e = {0x12345678};  // ? e = | 78 | 56 | 34 | 12 |

    e.byte[0] == 0x78 ? printf("Little\n") : printf("Big\n");   // ? 0x12 for big endian system

    return 0;
}

#endif

#if 0

union 
{

};

int main()
{

    return 0;
}

#endif