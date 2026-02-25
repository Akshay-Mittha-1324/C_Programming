#include<stdio.h>
int main()
{
    printf("How are you!\n");
   for(int i = 1; i <= 10; i++)
   {
    if(i == 5)
    {
        goto l;
    }
   }
   l: printf("Hello\n");
    return 0;
}