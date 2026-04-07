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

#if 0

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

#if 0

// ? Rule 5 NULL Pointer

int main()
{
    int *num = NULL;    // ? Declare and initialize

    int *val;   // ? Declare 

    val = NULL; // ? Then initialize

    // ? num and val are pointing to 0th address which is reserved address by Kernel 
    //printf("%d %d\n",*num,*val);    // ? Accessing to the NULL pointers will lead to Segmentation Fault

    //*num = 123;
    int *n;

    *n = 123;   // ? Assigning to the garbage address
    printf("%d\n%u\n",*n,n);    // ? Will work fine for some cases
    return 0;
}

#endif

#if 0
int main()
{
    int num = 0;
    scanf("%d", num);   // ? Will lead to segmentation fault this is runtime error (num = 0 and zero is taken as 0th address)
    printf("%d\n",num);
}
#endif


#if 0

// ? Void pointer

int main()
{
    double x = 7.2;

    void *vptr = &x;

    printf("%hhX\n",*(char *) vptr);
    printf("%hhX\n",*(char *) (vptr + 7));
    printf("%hX\n",*(short *) (vptr + 3));
    printf("%X\n",*(int *) (vptr + 0));
    return 0;
}

#endif

#if 0

// ? WAP to swap any given data type

void swap(void *first, void *second, int size)
{
    char temp;
    int i = 0;
    for(i = 0; i < size; i++)
    {
        temp = *(char *) first;
        *(char *) first = *(char *) second;
        *(char *) second = temp;
    }
}

int main()
{
    int n1 = 10, n2 = 20;
    printf("Before Swap : %d %d\n",n1,n2);
    swap(&n1,&n2,sizeof(int));
    printf("After Swap : %d %d\n",n1,n2);

    char c1 = 'A', c2 = 'B';
    printf("Before Swap : %c %c\n",c1,c2);
    swap(&c1,&c2,sizeof(char));
    printf("After Swap : %c %c\n",c1,c2);

    double d1 = 12.5034094, d2 = 11.242424;
    printf("Before Swap : %lf %lf\n",d1,d2);
    swap(&d1,&d2,sizeof(double));
    printf("After Swap : %lf %lf\n",d1,d2);

    int a[] = {1, 2, 3}, b[] = {4, 5, 6};
    printf("Before Swap : \nA : ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nB : ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ",b[i]);
    }    
    swap(a,b,sizeof(a));
    printf("\nAfter Swap : \nA : ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nB : ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}

#endif

#if 1
int main()
{
    char str[5] = "Emertxe";
    printf("%s\n",str);
    return 0;
}
#endif