#include<stdio.h>

#if 0
int main()
{
    int num = 123;
    int *ptr = &num;    // ? Assigning addres of num to pointer ptr

    printf("%d\n",num); // ? 123
    printf("%d\n",*ptr);    // ? 123

    num = 999;  // ? Modifying the value

    printf("%d\n",num); // ? 999
    printf("%d\n",*ptr);    // ? 999
}
#endif
#if 0
int main()
{
    int num = 123;
    int *ptr = &num;
    printf("%d\n",num);
    printf("%d\n",*ptr);

    *ptr = 999;
    printf("%d\n",num);
    printf("%d\n",*ptr);
}
#endif

#if 0
int main()
{
    int *iptr;
    char *cptr;
    float *fptr;
    double *dptr;
    printf("sizeof iptr : %zu\n",sizeof(iptr));     // ? all the printf statements will give 8 bytes as output cuz we are using pointer .
    printf("sizeof cptr : %zu\n",sizeof(cptr));
    printf("sizeof fptr : %zu\n",sizeof(fptr));
    printf("sizeof dptr : %zu\n\n",sizeof(dptr));

    printf("sizeof iptr : %zu\n",sizeof(*iptr));    // ? they will give their data type size as they have been dereferenced
    printf("sizeof cptr : %zu\n",sizeof(*cptr));
    printf("sizeof fptr : %zu\n",sizeof(*fptr));
    printf("sizeof dptr : %zu\n",sizeof(*dptr));
    
}
#endif

#if 0
int main()
{
    int num = 12;
    char *cptr = &num;
    printf("%zu\n%zu\n",sizeof(cptr),sizeof(*cptr));    // ? 8 bytes as pointer and 1 byte due to char pointer
}
#endif

#if 0
int main()
{
    int num = 0x12345678;
    int *ptr = &num;
    char *cptr = &num;

    printf("*ptr %x\n*cptr %x\n",*ptr,*cptr);   // ? *ptr will print whole number and *cptr will print 78 as the system is little endian system
    
    *cptr = 0x11;
    printf("%x\n%x\n",*ptr,*cptr);
    return 0;
}
#endif

#if 0
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    printf("Value\t\tAddress\n");
    for(i = 0; i < 5; i++)
        printf("%d\t\t%p\n",arr[i],&arr[i]);
}
#endif

#if 0
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i;
    printf("Value\t\tAddress\n");
    for(i = 0; i < 5; i++)
        printf("%d\t\t%p\n",ptr[i],&ptr[i]);
}
#endif

#if 0
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i;
    printf("Value\t\tAddress\n");
    for(i = 0; i < 5; i++)
        printf("%d\t\t%p\n",*(ptr + i),(ptr + i));
}
#endif

#if 0
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int *ptr = arr;
    printf("Value\t\tAddress\n");
    for(i = 0; i < 5; i++)
        printf("%d\t\t%p\n",i[ptr],&i[ptr]);
}   

#endif

#if 0
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p1, *p2;   // ? char * p1, p2;
    p1 = &arr[1];
    p2 = &arr[4];
    int i = (char *)p2 - (char *)p1;    // ? another method
    printf("%d\n",i);
    return 0;
}

#endif

#if 1

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p1, *p2;
    p1 = &arr[1];
    p2 = &arr[4];    
    int i = p2 - p1;    // ?
    printf("%d\n",i);
}
#endif