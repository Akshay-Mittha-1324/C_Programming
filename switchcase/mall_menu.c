#include<stdio.h>
void main(){
    int option;
    printf("1. Game Zone\t2. Food Court\t3. Theater\t4. Cloth Shops\t5. Exit\n\n");
    printf("Enter the option: ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("\nWelcome to Game Zone!\n1. Balling Section\t2. VR Section\t3. Kids Section\nEnter the Option: ");
        scanf("%d",&option);
        int amount,ticket;
        switch (option)
        {
        case 1:
            printf("\nWelcome to Balling Section!\n");
            amount = 200;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of the Tickets %d is %d\nThank You Visit Again!\n",ticket,amount);
            break;
        
        case 2:
            printf("\nWelcome to VR Section!\n");
            amount = 400;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of the Tickets %d is: %d\nThank You Visit Again!\n",ticket,amount);
            break;

        case 3:
            printf("\nWelcome to Kids Section!\n");
            amount = 150;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of the Tickets %d is: %d\nThank You Visit Again!\n",ticket,amount);
            break;
        
        default:
            printf("\nYou have entered the Incorrect Option please enter the correct option!\n\n");
            break;
        }
        break;

    case 2:
        printf("\nWelcome to Food Court!\n1. McDonalds\t2. Star Bucks\t3. Dominos\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\nWelcome to McDonalds\nThank You Visit Again!\n");
                break;
            
            case 2:
                printf("\nWelcome to Star Bucks\nThank You Visit Again!\n");
                break;

            case 3:
                printf("\nWelcome to Dominos\nThank You Visit Again!\n");
                break;

            default:
                printf("\nYou have entered the Incorrect Option please enter correct option!\n\n");
                break;
        }
        break;

    case 3:
        printf("\nWelcome to Theater!\n1. PVR\t2. INOX\t3. Cinepols\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("\nWelcome to PVR!\n");
            amount = 500;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of Tickets %d is: %d\nThank You Visit Again!\n",ticket,amount);
            break;
        
        case 2:
            printf("\nWelcome to INOX!\n");
            amount = 700;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of Tickets %d is: %d\nThank You Visit Again!\n",ticket,amount);
            break;

        case 3:
            printf("\nWelcome to Cinepols!\n");
            amount = 250;
            printf("\nThe Amount of Ticket is: %d\nEnter the Number of Tickets: ",amount);
            scanf("%d",&ticket);
            amount = amount * ticket;
            printf("\nThe Total Amount of Tickets %d is: %d\nThank You Visit Again!\n",ticket,amount);
            break;

        default:
            printf("\nYou have entered the Incorrect Option Please enter the correct Option!\n");
            break;
        }
        break;

    case 4:
        printf("\nWelcome to Cloths Section!\n1. West Side\t2. Decathlon\t3. Zudio\n");
        scanf("%d",&option);
        int items;
        switch(option)
        {
            case 1:
                printf("\nWelcome to West Side!\n");
                amount = 500;
                printf("\nThe Amount of 1 Item is: %d\nEnter the Number of Items: ",amount);
                scanf("%d",&items);
                amount = amount * items;
                printf("\nThe Total Amount of Items %d is: %d\nThank You Visit Again!\n",items,amount);
                break;

            case 2:
                printf("\nWelcome to Decathlon!\n");
                amount = 450;
                printf("\nThe Amount of 1 Item is: %d\nEnter the Number of Items: ",amount);
                scanf("%d",&items);
                amount = amount * items;
                printf("\nThe Total Amount of Items %d is: %d\nThank You Visit Again!\n",items,amount);
                break;

            case 3:
                printf("\nWelcome to Zudio!\n");
                amount = 250;
                printf("\nThe Amount of 1 Item is: %d\nEnter the Number of Items: ",amount);
                scanf("%d",&items);
                amount = amount * items;
                printf("\nThe Total Amount of Items %d is: %d\nThank You Visit Again!\n",items,amount);
                break;

            default:
                printf("\nYou have entered Incorrect Option Please enter the correct option!\n");
                break;
        }
    
    case 5:
        printf("\nThank You! Please Visit The Mall Again!\n");
        break;

    default:
        printf("\nYou have Entered the Incorrect Option Please Enter the Correct Option!\n");
        break;
    }
}