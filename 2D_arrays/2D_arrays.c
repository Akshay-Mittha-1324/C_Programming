#include<stdio.h>

#if 0

int main()
{
    int a[2][3] = {{1, 2, 3} , {4 , 5, 6}};
    int i , j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
            printf("%d ",*(a[i] + j));
            printf("%d ",*(*(a + i) + j));
            printf("%d ",(*(a + i))[j]);
        }
        printf("\n");
    }
    return 0;
}

#endif

#if 0

int main()
{
    int a[2][3] = {{1, 2, 3} , {4 , 5, 6}};

    printf("Sizeof a : %zu\n",sizeof(a)); // ? 24 Bytes

    printf("Sizeof a[0] : %zu\n",sizeof(a[0]));   // ? 12 Bytes

    printf("Sizeof a[0][0] : %zu\n",sizeof(a[0][0]));

    printf("Sizeof *a : %zu\n",sizeof(*a)); // ? 12 Bytes
    printf("Sizeof **a : %zu\n",sizeof(**a));

    return 0;
}

#endif


#if 0

// Find min and max of a 2d array

int main()
{
    int r,c;
    printf("Enter the rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the array elements : ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int min = a[0][0], max = a[0][0];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
            else if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("Min = %d\nMax = %d\n",min,max);

    return 0;
}

#endif

#if 0

// ? Array of Pointers

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    for(int i = 0; i < 3; i++)
        printf("%d ",*ptr[i]);
    printf("\n");
    return 0;
}

#endif

#if 1

// ? Printing in different formats

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    int j = 0;

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",*ptr[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",**(ptr + i));
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",ptr[i][0]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",ptr[i][j]);
    }

    printf("\n");

    return 0;
}

#endif