#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
// ? dynamic memory allocation
{
    char array[5];  // ? stored in stack, named memory allocation

    char *ptr;
    ptr = malloc(7);    // ? stored in heap, unnamed memory allocation

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        perror("Error : "); // ? give the reason for the error
        return -1;
    }

    strcpy(ptr,"Akshay");
    printf("%s\n",ptr);
    free(ptr);
    return 0;
}
#endif

#if 0
// ? Validation of the ptr pointer
{
    char *ptr;

    ptr = malloc(2412491191204091859081395931535235235);

    if(ptr == NULL)
    {
        perror("ERROR : ");
        return -1;
    }
    free(ptr);
    return 0;
}
#endif

#if 0
// ? Checking if the memory is access able or not
{
    char *ptr;

    ptr = malloc(3501835083935353523535235235);

    strcpy(ptr,"Akshay");   // ? will lead to segmentation fault cuz accessing the null pointer will give segmentation fault
    puts(ptr);
    free(ptr);
    return 0;
}
#endif

#if 0
// ? running using the g++ compiler  
{
    char *ptr;

    ptr = malloc(6);    // ? correct way typecast it (char *) malloc(6);

    return 0;
}

#endif

#if 0

// ? calloc

{
    char *ptr;

    ptr = calloc(7 , 1);

    if(ptr == NULL)
    {
        perror("Error : ");
        return -1;
    }

    strcpy(ptr,"Akshay");
    puts(ptr);
    free(ptr);

    return 0;
}

#endif

#if 0

// ? average of array 
void read_ele(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
float average_arr(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float avg = sum / (float) size;
    return avg;
}
int main()
{
    int size;
    scanf("%d",&size);
    int *arr;
    
    arr = (int *) calloc(size, sizeof(int));

    //int *ptr = (int *) malloc(size * sizeof(int));

    if(arr == NULL)
    {
        perror("Error : ");
        return -1;
    }

    read_ele(arr,size);
    printf("Average of array = %g\n",average_arr(arr,size));

    free(arr);

    return 0;
}
#endif

#if 0
// ? Implement strdup function
char *my_strdup(const char *str)
{
    char *s = (char *) malloc(strlen(str) + 1);

    if(s == NULL)
    {
        perror("ERROR : ");
        return -1;
    }

    strcpy(s,str);

    char *sptr = s;

    free(s);

    return sptr;
}
int main()
{ 
    
    char *s = strdup("Hello");
    
    puts(s);

    return 0;
}
#endif

#if 0

// ? Free function

int main()
{
    char *ptr;
    int iter;
    ptr = (char *) malloc(5 * sizeof(char));

    for(iter = 0; iter < 5; iter++)
        ptr[iter] = 'A' + iter;
    
    for(iter = 0; iter < 5; iter++)
        printf("%c ",ptr[iter]);
    
    printf("\n");
    
    free(ptr);  // ? Memory will be freed and if we try to access this pointer then it will lead to undefined behaviour

    for(iter = 0; iter < 5; iter++) // ? ptr is known as dangling pointer
        printf("%c ",ptr[iter]);    // ? May print garbage values or undefined behaviour
    
    printf("\n");

    //free(ptr);  // ? Freeing of already freed block will give us double free detected error
    
    return 0;
}

#endif

#if 0

// ? use of constant

int main()
{
    const int num = 100;
    int *iptr = &num;

    printf("%d\n",*iptr);

    *iptr = 200;

    printf("%d\n",*iptr);

    return 0;
}

#endif

#if 0

int main()
{
    const int num = 100;

    int *iptr = &num;

    num = 200;  // ? ❌ Compiler Error Read only variable cannot directly modify the num value 

    *iptr = 200;    // ? ✅ Can be modified by pointer

    printf("%d\n",*iptr);

    return 0;
}

#endif

#if 0

int main()
{
    int num = 100;
    const int *iptr = &num;

    printf("%d\n",*iptr);

    //num = 200;    // ? ✅ Can be modified directly
    *iptr = 200;    // ? ❌ Compiler error Read only location cannot be modified due to constant pointer

    printf("%d\n",*iptr);

    return 0;
}

#endif

#if 0

int main()
{
    int x = 10, y = 20;

    int * const ptr = &x;   // ? Address is constant

    printf("*ptr : %d\n",*ptr);

    ptr = &y;   // ? ❌ Compiler Error read only variable cannot modify the address due to constant pointer

    printf("*ptr : %d\n",*ptr);

    return 0;
}

#endif


#if 0

int main()
{
    int x = 10, y = 20;

    const int * const ptr = &x; // ? Data / Value and Address both are constant Non-modifiable

    ptr = &y;   // ? ❌ Compiler error read only variable

    *ptr = 999; // ? ❌ Compiler error read only variable

    return 0;
}

#endif

#if 0

int main()
{
    int *p1, *p2;

#if 1   // ? ✅ All these operations are valid

    p1 + 10;    // ? Pointer arithmetic is possible
    p2 - 10;    // ? Pointer arithmetic is possible
    p1 - p2;    // ? Pointer substraction is possible only if both pointer data types are same

#else   // ? ❌ All these are invalid operations will lead to compiler error
    p1 * 1;
    p2 / 2;
    p1 + p2;
    p1 * p2;
    p1 / p2;
#endif

    return 0;
}

#endif

#if 0

int main()
{
    char *ptr = malloc(5);

    ptr = ptr - ptr;

    return 0;
}

#endif

#if 0

int main()
{
    char arr[sizeof(int) + 1];

    int *p1, *p2;

    p1 = &arr[0];
    p2 = &arr[1];

    scanf("%x %x",p1,p2);   // ? 12345678   abcdefff

    printf("%x %x\n",*p1,*p2);  // ? ff ef cd 78    ab cd ef ff

    return 0;
}

#endif