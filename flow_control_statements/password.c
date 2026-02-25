#include<stdio.h>
int main()
{
    int password = 1234;
    int pass;
    while (1)
    {
        printf("Enter the password: ");
        scanf("%d",&pass);
        if(pass == password)
        {
            break;
        }
    }
    return 0;
}