#include<stdio.h>

#if 0

// ? Multilevel Pointers

int main()
{
    int num = 10;   // ? We cannot dereference a variable 
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("%u\n",ptr3);
    printf("%u\n",*ptr3);
    printf("%u\n",**ptr3);
    printf("%d\n",***ptr3);

    return 0;
}

#endif

#if 0

int main()
{
    int num = 10;   // ? We cannot dereference a variable 
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("%d\n",*num);    // ? All the statements will throw compiler error as we cannot dereference variable and in compatable pointers.
    printf("%d\n",**ptr1);
    printf("%d\n",***ptr2);
    printf("%d\n",****ptr3);

    return 0;
}

#endif

#if 0

void fun1(int num)
{
    printf("%d\n",num);
}

void fun2(int *num)
{
    printf("%d\n",*num);
}

void fun3(int *ptr)
{
    printf("%d\n",*ptr);
}

void fun4(int **ptr)
{
    printf("%d\n",**ptr);
}

int main()
{
    int num = 10;
    int *ptr = &num;

    fun1(num);
    fun2(&num);
    fun3(ptr);
    fun4(&ptr);

    return 0;
}

#endif

#if 1

int main()
{

    int a[] = {1 , 2 , 3 , 4 , 5};

    printf("%u\n",a);
    printf("%u\n",&a[0]);
    printf("%u\n\n",&a);

    printf("%u\n",a + 1);
    printf("%u\n", &a[0] + 1);
    printf("%u\n",&a + 1);

    return 0;
}


#endif