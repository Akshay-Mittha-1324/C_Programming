/*
    Typedefs 
    - Give your own name to existing datatypes
    - K and R (Dennis Ritchie Bryan Karnengan)
    - Makes program more portable 
    - Make complex declarations easy to understand
    - Changing every datatype modification will 
    - Typedef can make a complex definition or declaration easier to understand
    - No memory allocated for the typedef data type

    Syntax : 
    typedef int data;
    -> data is new name for int datatype
    -> no memory allocation

    data num;
    num -> variable of type data int 4 Byte memory allocation 

*/

#include <stdio.h>

#if 0

typedef int data;   // ? We can change the data type for here without any need to changing again and again everywhere

void fun1(data x)
{
    printf("In function 1\n");
}

void fun2(data x)
{
    printf("In function 2\n");
}

void fun3(data x)
{
    printf("In function 3\n");
}

int main()
{
    data x = 10;

    fun1(x);
    fun2(x);
    fun3(x);

    return 0;
}

#endif

#if 0

typedef struct _Student
{
    int id;
    char name[20];
}Student;

int main()
{
    Student s1;

    return 0;
}

#endif

#if 0

typedef signed int sint, si;
typedef unsigned int uint, ui;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

int main()
{
    u8 count = 200;
    s16 axis = -70;
    printf(“%u\n”, count);
    printf(“%d\n”, axis);
    return 0;
}

#endif

#if 1

typedef struct Sensor {
    int id;
    char name[12];
    int version;
    // ? The union members are also considered as the structure members
    // ? float temperature; 
    // ? float humidity;
    // ? char motion[4];
    
    /*
    * The members of an anonymous union
    * are considered to be members of the
    * containing structure.
    */
 union { // Anonymous union 
    float temperature;  // ? Can be accessed by the s.
    float humidity;
    char motion[4];
    };  // ? By providing the name to the union we have to access it using s.vik.temp etc

} Sensor;

int main()
{
    Sensor s;
    return 0;
}

#endif