#include<stdio.h>
int main()
{
    int num;
    do
    {
        printf("1. Start\n2. Stop\n3. Exit\nEnter choice: ");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("Started\n");
            break;
        
        case 2:
            printf("Stopped\n");
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (num != 3);
    
    return 0;
}