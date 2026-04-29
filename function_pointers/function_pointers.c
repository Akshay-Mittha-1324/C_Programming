#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>



#if 0

// ? void * is a generic pointer that can store any type of address

int sa(const void *a, const void *b)
{
    return *(int *) a > *(int *) b;
}


int sd(const void *a, const void *b)
{
    return *(int *) a < *(int *) b;
}

void print(int *a, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[5] = {5, 1, 4 , 2 , 3};
    
    qsort(a, 5, sizeof(int), sa);
    printf("Ascending: ");
    print(a, 5);

    qsort(a, 5, sizeof(int), sd);
    printf("Descending: ");
    print(a, 5);

    return 0;
}

#endif

#if 0

// ? Sorting for Double datatype 

int sa(const void *a, const void *b)
{
    return *(double *) a > *(double *) b;
}


int sd(const void *a, const void *b)
{
    return *(double *) a < *(double *) b;
}

void print(double *a, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%lf ",a[i]);
    }
    printf("\n");
}

int main()
{
    double a[5] = {5.4, 1.1, 4.2 , 2.7 , 3.8};
    
    qsort(a, 5, sizeof(double), sa);
    printf("Ascending: ");
    print(a, 5);

    qsort(a, 5, sizeof(double), sd);
    printf("Descending: ");
    print(a, 5);

    return 0;
}

#endif

#if 0

// ? Sorting of characters

int sa(const void *a, const void *b)
{
    return strcmp(a,b) > 0;
}


int sd(const void *a, const void *b)
{
    return strcmp(a,b) < 0;
}

void print(char a[][10], unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%s ",a[i]);
    }
    printf("\n");
}

int main()
{
    char ch[5][10] = {"ram", "messi", "ronaldo", "suiii", "rakshit"};
    
    qsort(ch ,5 , 10, sa);
    printf("Ascending: ");
    print(ch, 5);

    qsort(ch, 5, 10, sd);
    printf("Descending: ");
    print(ch, 5);

    return 0;
}

#endif

#if 0

// ? Binary Search using bsearch


int sa(const void *a, const void *b)
{
    if(*(int *) a > *(int *) b)
        return 1;
    else if(*(int *) a < *(int *) b)
        return -1;
    return 0;
}

void print(int *a, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{

    int a[] = {1 , 5, 4, 2, 3};

    int key = 5;    // ? 7 will give not found
    qsort(a,5, 4,sa);
    int *ptr;

    ptr = bsearch(&key, a, 5, 4, sa);
    ptr == NULL ? printf("Not Found!\n"): printf("Found!\n");

    return 0;
}

#endif


#if 0

// ? Variadic Functions

// ? Variadic functions can be called with any number of trailing arguments
// ? Variadic functions can be called in the usual way with individual arguments

// ? return_data_type function_name(parameter list, ...);

// ? Implementing the 

int add(int count , ...)
{
    va_list ap;
    int i, sum = 0;

    va_start(ap,count); // ? va_start should point to last collected argument

    for(i = 0; i < count; i++)
        sum += va_arg(ap, int);
    
    va_end(ap);

    return sum;
}


int main()
{
    int res;

    res = add(3, 3, 2, 5);  // ? Res is 10
    printf("Sum = %d\n",res);

    res = add(5, 5, 4, 3, 5 , 10);  // ? Res is 27
    printf("Sum = %d\n",res);
    return 0;
}

#endif

#if 0

int add(int count , int count1, ...)
{
    va_list ap;
    int i, sum = 0;

    va_start(ap,count1); // ? va_start should point to last collected argument

    for(i = 0; i < count1; i++)
        sum += va_arg(ap, int);
    
    va_end(ap);

    return sum;
}


int main()
{
    int res;

    res = add(3, 3, 2, 5);  // ? Res is 10
    printf("Sum = %d\n",res);

    res = add(5, 4, 3, 5 , 10);  // ? Res is 27
    printf("Sum = %d\n",res);
    return 0;
}

#endif

#if 0

// ? Implementing own printf function

void my_printf(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    int num;
    float f;
    double d;
    while(*fmt != '\0')
    {
        if(*fmt == '%')
        {
            fmt++;
            if(*fmt == 'd')
            {
                num = va_arg(ap, int);
                fprintf(stdout, "%d", num);
            }
            else if(*fmt == 'f')
            {
                f = va_arg(ap, double);
                fprintf(stdout, "%f", f);
            }
            else if(*fmt == 'l')
            {
                fmt++;
                if(*fmt == 'f')
                {
                    d = va_arg(ap, double);
                    fprintf(stdout, "%lf", d);
                }
            }
        }
        else
        {
            putchar(*fmt);
        }
        fmt++;
    }
}

int main()
{
    my_printf("Hello World!\n");
    my_printf("x = %d\n",10);
    my_printf("%d %d %d %d\n",11, 22, 33 , 44);
    my_printf("%f %f %lf %lf\n",1.3f, 2.5f, 5.5, 6.89);
    return 0;
}

#endif