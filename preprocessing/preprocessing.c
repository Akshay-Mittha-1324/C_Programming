// ? Preprocessing is the first step performed before compilation
// ? Tell the compiler to do some operation before actual compilation
// ? Easy Development, Portability, Readability

/* 
Stages: 
1st : Preprocessing : Will create .i file that is intermediate file / expanded source code
                        1. Include the header file
                        2. Replace the Macro
                        3. Remove the comments
                        4. Conditional Compilation
                        
                        -E

2nd : Compilation : Will generate .s file that is assembly source code
                        1. Syntax Errors - ; , (), {}, 
                        
                        Undeclared 
                        Redefined 
                        Redeclared
                        
                        2. Code Optimization
                        
                        -S

3rd : Assembler : Will generate .o file that is object file
                        1. Object code will be generated
                        2. Convert Assembly code to Object Code (Architecture Dependent Object Code is generated)
                        
                        -C
                        
4th : Linker : Will generate a.out file that is executable binary file
                        1. Link all the object files and create a Executable file.
                        2. Extern Variable linkage
                        3. Function call to function definition linkage
                        4. Link the libraries

Preprocessor -Directives

#include

#define

#undef

#ifdef

# (String)

## (Concatinition)


Header Files

libc.so (standard c library)
so shared object 

Macro 
    1. Object like marcos   - used to give some meaningful name for the constants
    Syntax:

    #define SYMBOLIC_NAME CONSTANTS

    We can also define the Macro in the terminal while compilation with following syntax

    gcc file_name.c -E -P -D MACRO_NAME (= VALUE)

    Example: 

    #define BUFFER_SIZE 1024
    #define MSG “Enter a string”

    2. Function like macros - Can take the arguments just like functions

    Syntax:

    #define MACRO(ARGUMENT(S)) (EXPRESSION WITH ARGUMENT(S))    


    Function vs Macros
    1. Function has a stack call and stack frame while macros has no stack frame
    2. Functions are compiled called during run time and Macro is Preprocessing stage
    3. Functions are not replace and Macro is Replace
    4. Context Switching for function and not for Macro
    5. Using Macro Speed is increased
    6. Functions are type sensitive only work for specific data type and Macro are type insensitive
    7. Macros used for small operations and Functions for Large Operations
    8. Functions will save memory and Macros will save the time

    Function
    
    #include <stdio.h>
    int set_bt(int n, int p)
    {
        return (n | (1 << p));
    }
    int main()
    {
        printf(“%d\n”, 2 * set_bt(0, 2));
        printf(“%d\n”, 4 * set_bt(0, 2));
        return 0;
    }

    ● Context switching overhead
    ● Stack frame creation overhead
    ● Space optimized on repeated call
    ● Compiled at compile stage, invoked at run time
    ● Type sensitive
    ● Recommended for larger operation

    Macro
    #include <stdio.h>
    #define set_bt(n, p) (n | (1 << p))
    int main()
    {
        printf(“%d\n”, 2 * set_bt(0, 2));
        printf(“%d\n”, 4 * set_bt(0, 2));
        return 0;
    }

    ● No context switching overhead
    ● No stack frame creation overhead
    ● Time optimized on repeated call
    ● Preprocessed and expanded at preprocessing stage
    ● Type insensitive
    ● Recommended for smaller operation

    Conditional Compilation - 
    - Portability
    - Testing
    - Reference Code

    Syntax :

    #ifndef NAME
    #define NAME

    Diagnostic Preprocessor directive

    #error

    #warning


*/

#include<stdio.h>

#if 0

//float PI = 3.14;
#define PI 3.14
int main()
{

    // ? Display the Message
    printf("Hello  World!\n%f\n",PI);
    EOF;
    NULL;
    return 0;
}

#endif

#if 0

int main()
{
    printf("Hello World!\n"); // Compiling with the assembly stage will generate the .s file in the directory

    return 0;
}


#endif

#if 0

int main()
{
    printf("Hello World!\n");   // ? Compiling with the assembly stage will convert the assembly code to object code will not get any error in this stage
    // ? Will generate the .o file object file in directory

    return 0;
}

#endif

#if 0

// void foo()
// {
//     printf("Hello World!\n");
// }
int main()
{
    // Display the message
    foo();  // ? Will give the warning in the compilation stage and if the definition is absent then it will give error in the linking stage if the declaration is not written

    return 0;
}

#endif

#if 0

int main()
{
    printf("Hello World!\n");

    return 0;
}

#endif

#if 0

//#include "foo.h"
#include <foo.h>    // ? To Compile this without error type gcc preprocessor.c foo.c -E -P -I . for current directory and ../ for previous directory
int main()
{

    foo();

    return 0;
}

#endif

#if 0

// ? Macros - 1. Object like Macro

void foo()
{
    printf("this print frm func : %s, ",__func__);

    printf("Line no : %d\n\n",__LINE__);
}

int main()
{
    printf("\nProgram : %s, ",__FILE__);
    printf("Was Compiled on %s at %s, ",__DATE__,__TIME__);
    foo();
    //printf("this print frm func : %s, ",__func__);
    //printf("Line no : %d\n\n",__LINE__);
    return 0;
}

#endif

#if 0

#include <stdio.h>
#define SET_BIT(num, pos) num | (1 << pos)

int main()
{
    printf("%d\n", 2 * SET_BIT(0, 2));  // ? 2 * 0 | (1 << 2)   calculations will happen at runtime 
    return 0;
}

#endif

#if 0

#include <stdio.h>
#define SET_BIT(num, pos) (num | (1 << pos))

int main()
{
    printf("%d\n", 2 * SET_BIT(0, 2));  // ? 2 * (0 | (1 << 2)) This will give 8 as operator precedence 
    return 0;
}

#endif

#if 0

// ? WAM to sum of 2 numbers

#define SUM(num1,num2) num1 + num2

int main()
{
    printf("%d\n",SUM(5,5));
    return 0;
}

#endif

#if 0

#define SQUARE(num) num * num

int main()
{
    printf("%d\n",SQUARE(3 + 2));
    return 0;
}

#endif

#if 0

#define SWAP(a, b)      \
        int temp = a;   \
        a = b;          \
        b = temp;       \

int main()
{
    int n1 = 10, n2= 20;
    SWAP(n1, n2)
    printf("%d %d\n", n1, n2);
    SWAP(n1, n2)
    printf("%d %d\n", n1, n2);
    return 0;
}

#endif

#if 0

#define SWAP(n1,n2)     \
{                       \
    int temp = n1;      \
    n1 = n2;            \
    n2 = temp;          \
}                       

int main()
{
    int n1 = 10, n2 = 20;
    SWAP(n1,n2)
    printf("%d %d\n",n1,n2);
    SWAP(n1,n2)
    printf("%d %d\n",n1,n2);
    return 0;
}
#endif

#if 0

// ? WAM to swap any two numbers of basic type using temporary variable int , float , char , double


#endif

#if 0

#define WARN_IF(EXP)                                \
do                                                  \
{                                                   \
    x--;                                            \
    if (EXP)                                        \
    {                                                            
        fprintf(stderr, "Warning: " #EXP "\n");     \
    }                                               \
} while (x);

int main()
{
    int x = 5;
    WARN_IF(x == 0);
    return 0;
}

#endif

#if 0

// ? Conditional Compilation

#include "struct.h"
#include "struct.h"

int main()
{
    return 0;
}

#endif

#if 0

// ? ifdef

#define METHOD1

int main()
{
    #ifdef METHOD1  // ? If macro defined then the condition is True
        puts("Hello World!");
    #else
        printf("Hello World!\n");
    #endif
    return 0;
}

#endif

#if 0

// ? ifndef

#undef METHOD1  // ? #define METHOD1 will give the printf

int main()
{
    #ifndef METHOD1
        puts("Hello World!");
    #else
        printf("Hello World!\n");
    #endif
    return 0;
}

#endif

#if 0

// ? #define

#define METHOD1
#define METHOD2

int main()
{
    #if defined (METHOD1)
        puts("Hello World!");
    #endif
    #if defined (METHOD2)
        printf("Hello World!\n");
    #endif
    #if defined (METHOD1) && defined (METHOD2)
        puts("Hello World!");
        printf("Hello World!\n");
    #endif
    return 0;
}

#endif

#if 0

// ? #if

#define METHOD1  1

int main()
{
    #if METHOD1 == 1
        puts("Hello World!");
    #else
        printf("Hello World!\n");
    #endif
    return 0;
}

#endif

#if 0

// ? #else

#define METHOD1 2

int main()
{
    char str[] = "Hello World";
    #if METHOD1 == 1
        puts("HEllo WOrld!");
    #elif METHOD1 == 2
        printf("Hello World!\n");
    #else
        for(int i = 0; str[i] ; i++)
            putchar("%c",str[i]);
    #endif
    return 0;
}

#endif

#if 0

// ? Time and Space Complexity

// ? Cond... Com... - CL Option


int main()
{
    int x = 10, y = 20;
    #ifdef SPACE_OPTIMIZED  // ? Macro is not Defined can also be added using terminal while compiling 
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        printf("Selected Space Optimization\n");
    #else
        int temp;
        temp = x;
        x = y;
        y = temp;
        printf("Selected time Optimization\n");
    #endif
    return 0;
}

#endif

#if 0

// ? #if 0  - Used to comment the program

#endif

#if 0

// ? Diagnostic directive 

// ? #error & #warning


#define DEBUG_PRINT
#if defined DEBUG_PRINT
#warning "Debug print enabled"
//#error "Debug print is enabled"
#endif
int main()
{
    int sum, num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
#ifdef DEBUG_PRINT
    printf("The entered values are %d %d\n", num1, num2);
#endif
    sum = num1 + num2;
    printf("The sum is %d\n", sum);
    return 0;
}

#endif

#if 0

#if defined (STATIC) || defined (DYNAMIC)
#define SIZE 100
#else
#error "Memory not allocated!! Use -D STATIC or DYNAMIC while compiling"
#endif
int main()
{
    #if defined STATIC
        char buffer[SIZE];
    #elif defined DYNAMIC
        char *buffer = malloc(SIZE * sizeof(char));
    #endif
    #if defined (STATIC) || defined (DYNAMIC)
        fgets(buffer, SIZE, stdin);
        printf(“%s\n”, buffer);
    #endif
    return 0;
}

#endif

#if 0

// ? #line

int main()
{
    #line 1 "project tuntun"
    printf("This is from file %s at line %d \n", __FILE__ , __LINE__);
    
    printf("Program : %s, line no : %d\n",__FILE__, __LINE__);
    return 0;
}

#endif

#if 0

// ? ## is used as concatenation

#define MERGE(exp)  exp##num

int main()
{
    int mynum = 123;
    printf("%d\n",MERGE(my));
    return 0;
}

#endif

#if 0

// ? Macros are insensitive

#define SUM(x, y) x + y

int main()
{
    int n1 = 10, n2 = 20;
    float f1 = 12.125, f2 = 5.625;
    printf("Sum : %d\n",SUM(n1,n2));
    printf("Sum : %g\n",SUM(f1,f2));
    printf("Sum : %g\n",SUM(n1,f2));
    return 0;
}

#endif

#if 0

// ? SWAP any datatype using Macro and without using void *

#define SWAP(datatype, a, b)    \
{                               \
    datatype temp = a;          \
    a = b;                      \
    b = temp;                   \
}

int main()
{
    int n1 = 10, n2 = 20;
    printf("Before swap : %d %d\n",n1,n2);
    SWAP(int,n1,n2)
    printf("After swap : %d %d\n",n1,n2);

    char c1 = 'A', c2 = 'Z';
    printf("Before swap : %c %c\n",c1,c2);
    SWAP(char,c1,c2)
    printf("After swap : %c %c\n",c1,c2);

    double d1 = 10.12, d2 = 13.13;
    printf("Before swap : %lf %lf\n",d1,d2);
    SWAP(int,d1,d2)
    printf("After swap : %lf %lf\n",d1,d2);

    return 0;   
}

#endif


#if 0

// ? To avoid structure Padding the pragma preprocessing directive is used

#pragma pack(1) // ? 1 2 4 8 based on the bitness of the system to avoid padding tightly packed

struct Student
{
    char ch;
    int id;
    char ch1;
};

int main()
{
    printf("%zu\n",sizeof(struct Student));
    return 0;
}

#endif