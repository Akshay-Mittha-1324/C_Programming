#include<stdio.h>
int main()
{
    int i;
    do
    {
        printf("_____Menu_____\n");
        printf("1.Tea\t2.Coffee\t3.Cold Coffee\t4.Lemon Tea\t5. Exit\n");
        printf("Enter theh choice: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            printf("Thank you for ordering Tea\n");
            break;
        
        case 2:
            printf("Thank you for ordering Coffee\n");
            break;

        case 3:
            printf("Thank you for ordering Cold Coffee\n");
            break;

        case 4:
            printf("Thank you for ordering Lemon Tea\n");
            break;
        
        case 5:
            printf("Thank you\nVisit Again!\n");
            break;
        
        default:
            printf("Invalid Choice! Please try again!\n");
            break;
        }
    } while (i != 5);
    return 0;
}