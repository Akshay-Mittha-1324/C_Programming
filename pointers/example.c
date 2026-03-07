#include<stdio.h>
#if 0
void main()
{
    int *ptr, a = 15;
    float b = 10;
    //ptr = b;
    ptr = &a;
    //printf("%p\n%p\n",ptr,&a);
    printf("%X\t%p\t%d\n",&a,ptr,a,"%f\n",b);
}
#endif
#if 0
void fun(int *ptr)
{
    int a = 10;
    ptr = &a;
    printf("%d\n",*ptr);
}
void main()
{
    int a = 20;
    int *ptr = 0;
    fun(ptr);
    printf("%d\n",*ptr);
}
#endif
#if 0
void fun(char *s)
{
    if(*s)
        fun(s + 1);
    printf("%c",*s);    // ? %s -> s
}
void main()
{
    fun("Hello""World");
    printf("\n");
}
#endif
#if 0
void main()
{
    char a[] = "Hello World";
    a[5] = 4[a] - *(a + 7);
    printf("%c\t%s\n",a[5],4[a],*(a + 7),a);
}
#endif
#if 1
void main()
{
    int a = 10, b = 11;
    int *p, *q;
    p = &a;
    //printf("a = %d %d %#lX %p\n",a,*p,p,p);
    
    //q = *p;   // ? Its illegal in C as pointer can only hold address so value cannot be assigned to pointer leads to Segmentation Fault

    //printf("Size of pointer = %zu\n",sizeof p);

    //*q = p; // ? This will store the address of p pointer
    //printf("value of q = %u %u %u\n",*q,p,&a);    // ? According to above statement both will print same value address of p stored in q pointer

    //q = p;  // ? This will store the address of p into q
    //printf("address of p = %p %p %p\n",p,q,&a);

    // *q = *p;
    // printf("value in q %u\n",*q);

    q = &p;
    printf("q = %u p = %u a = %u\n",*q,p,&a);
}
#endif