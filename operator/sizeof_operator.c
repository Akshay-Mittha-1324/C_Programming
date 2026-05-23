#include<stdio.h>
int main()
{
    //Sizeof Operator is executed at the compile time
    int a;
    char b = 'B';
    float f = 3.14;
    double d;
    printf("%ld\n",sizeof(a));
    printf("%ld\n",sizeof(b));
    printf("%ld\n",sizeof(f));
    printf("%zu\n",sizeof(d));
    printf("%zu\n",sizeof(long int));
    //printf("%ld\n",sizeof(short));
    printf("%ld\n",sizeof(long long));
    printf("%ld\n",sizeof('A'));

    int num1 = 5;
    int num2 = sizeof(++num1);
    printf("num1 is %d and num2 is %d\n", num1, num2);
    return 0;
}