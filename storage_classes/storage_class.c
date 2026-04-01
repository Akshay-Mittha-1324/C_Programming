#include<stdio.h>
#include<unistd.h>
#include<string.h>

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

#if 0
int main()
{
    extern char x;
    printf("x %c \n",x);
    return 0;
}
int x = 0x31;
#endif

#if 0
// ? Static Function
int num;

void fun1();

int main()
{
    while(1)
    {
        num++;
        fun1();
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int num;

void fun1();
void fun2();

int main()
{
    while(1)
    {
        num++;
        fun1();
        sleep(1);
        fun2();
        sleep(1);
    }
    return 0;
}
#endif
#if 0
int main()
{
    int num;
    num = 123;
    num = 234;
    num = 345;
    return 0;
}
#endif
#if 0

// ? Loading program

int main()
{
    int i , j , k;
    for(i = 1; i <= 100; i++)
    {
        printf("\rLoading [");

        for(j = 1; j <= 100; j++)
        {
            j <= i ? putchar('-') : putchar(' ');
        }
        printf("] %3d%%",i);
        fflush(stdout);
        for(k = 0xafffff; k--; );
    }
    printf("\nFinished\n");\
    return 0;
}
#endif

#if 1

// ? Rotating program

void rotate(char arr[],int n)
{
    int i;
    char temp = arr[0];
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int main()
{
    char str[] = "                      Akshay";
    int len = strlen(str);
    while(1)
    {
        printf("\r%s",str);
        fflush(stdout);
        for(int k = 0x5ffffff; k--;);
        //sleep(1);
        rotate(str,len);
    }
    return 0;
}
#endif