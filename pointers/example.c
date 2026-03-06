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
#if 1
void main()
{
    char a[] = "Hello World";
    a[5] = 4[a] - *(a + 7);
    printf("%c\t%s\n",a[5],4[a],*(a + 7),a);
}
#endif