#include<stdio.h>
#include<unistd.h>
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
#if 0

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

#if 0

int num;

void foo1();
void foo2();

int main()
{
    while(1)
    {
        num++;
        foo1();
        sleep(1);
        foo2();
        sleep(1);
    }
}
#endif
#if 0
int num;
void foo1();
int main()
{
    while(1)
    {
        num++;
        foo1();
        sleep(1);
        printf("num in main : %d\n",num);
    }
}
#endif
#if 0
int num;
int foo2();
int main()
{
    while(1)
    {
        num++;
        foo2();
        //sleep(1);
        printf("int in num = %d\n",num);
    }
}
#endif

#if 0
int main()
{
    int x;
    {
        int x = 10;
        {
            extern int x;
            printf("1 %d\n",x);
        }
        printf("2 %d\n",x);
    }
    printf("3 %d\n",x);
}
int x = 20;
#endif

#if 1
int main()
{
    extern char x;
    printf("x %c \n",x);
    return 0;
}
int x = 0x31;
#endif