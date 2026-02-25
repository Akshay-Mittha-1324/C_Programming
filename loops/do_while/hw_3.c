#include<stdio.h>
int main()
{
    int pass = 1234,password;
    do
    {
        printf("Enter Password: ");
        scanf("%d",&password);
        if(pass == password)
        {
            printf("Access granted.\n");
            break;
        }
        printf("Incorrect password. Try again.\n");
    } while (password != pass);
    
    return 0;
}