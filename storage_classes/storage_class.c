#include<stdio.h>
#if 0
char *foo()
{
    char ca[12] = "Hello World";
    return ca;  // ? Cannot return the local address
}
int main()
{
    char *ca;
    ca = foo(); // ? Segmentation fault due to returning of local address
    printf("%s\n",ca);
    return 0;
}
#endif
#if 0
int *foo()
{
    static int i = 10;  // ? Memory in the data segment
    int *j = &i;
    return j;   // ? &i
}
int main()
{
    int *i;
    i = foo();
    printf("Hello\n");
    printf("*i %d\n", *i);  // ? 10 is printed
    return 0;
}
#endif

#if 0
char *foo()
{
    static char ca[20] = "Hello WOrld"; 
    return ca;
}
int main()
{
    char *ca;
    ca = foo();
    printf("%s\n",ca);
}
#endif
#if 0
int foo()
{
    static int ticket = 0;
    ticket++;
    return ticket;
}
int main()
{
    int count;
    count = foo();
    count = foo();
    printf("%d\n",count);
}

#endif
#if 0

int main()
{
    static int n = 5;
    if(--n)
    {
        main();
    }
    printf("%d\n",n);
    return 0;
}
#endif

#if 0

int main()
{
    static int n = 5;
    if(--n)
    {
        return main();
    }
    printf("%d\n",n);
    return 0;
}
#endif

#if 0
int *foo()
{
    int i = 10;
    static int *j = &i; // ? Must have a constant value, i will be initialized at runtime so j is not initialized
    return j;
}
int main()
{
    int *i;
    i = foo();
    printf("*i %d\n", *i);
    return 0;
}

#endif

#if 0

int x = 10;
int x = 20; // ? The both are defined in the program scope so re definition error
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif
#if 1

int x;
static int x = 10;


int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif