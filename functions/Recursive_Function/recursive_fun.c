#include<stdio.h>
int print(int num)
{
    printf("%d\t",num);
    if(num == 5)
    {
        return num;
    }
    printf("%d\n",print(num + 1));
}
int main()
{
    int num = 1;
    printf("%d\n",print(num));
    return 0;
}