/*
    Enum 
    - Name for the Integral Values
    - Only used for integral constants
    - Better Readability only for integers
    - Can be used to give meaning name for integers
    - If more than 4 Bytes is used the integer will convert to long int
    - Case label must be integer constant char constant or enum can be used
    
    Syntax 
    enum name
    {
        Members separated with , comma
    }

*/


#include <stdio.h>

#if 0

enum bool
{
    e_false, e_true
};
int main()
{
    printf("%d %d\n",e_false,e_true);
    return 0;
}

#endif

#if 0

typedef enum
{
    e_red = 1,
    e_blue = 4,
    e_green // ? Assign default value as the natural order
} Color;

int main()
{
    Color e_white = 0, e_black; // ? e_black will have garbage value as it is explicitly declared outside enum

    printf("%d\n", e_white);
    printf("%d\n", e_black);
    printf("%d\n", e_green);
    return 0;
}

#endif

#if 0

int main()
{
    typedef enum 
    {
        red,
        blue
    }Color;
    
    int blue;   // ? Cannot give the same name as enum in the same scope

    printf("%d\n", blue);
    printf("%d\n", blue);
    return 0;
}

#endif

#if 0

typedef enum
{
    red = 99999999999999,
    blue,
    green
}Color;
int main()
{
    Color c;

    printf("%zu\n", sizeof(Color));  // ? Sizeof enum does not depend on the number of members
    printf("%zu\n", sizeof(c)); // ? Sizeof enum is sizeof integer
    return 0;
}

#endif

#if 1

typedef enum Colour
{
    red, blue, green
}Colour;

enum Colour fun1()
{
    return green;
}

int main()
{
    //red = 123;  // ? Cannot change the value explicitly because they are just names for the values
    printf("%d\n",fun1());
    return 0;
}

#endif