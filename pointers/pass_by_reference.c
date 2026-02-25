#include<stdio.h>
void update(int *num1, int *num2)
{
    *num1 += 1;
    *num2 += 1;
}
int main()
{
    int num1 = 10,num2 = 45;
    printf("%d\t%d\n",num1,num2);
    update(&num1,&num2);
    printf("%d\t%d\n",num1,num2);
    return 0;
}