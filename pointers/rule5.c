#include<stdio.h>
int main()
{
    char ch = 'A';
    char *cptr = &ch;
    printf("%u\t%u\t%u\n",cptr,sizeof(*cptr),cptr + 1);
    return 0;
}