#include<stdio.h>

int main()
{
    unsigned int lang,movie,ticket,seat_type,amount;
    char confirmation,regular[10] = "Regular",premium [10] = "Premium";
    printf("__________INOX__________\nChoose Language:\n1. Hindi\n2. Marathi\n3. Kanada\n4.Tamil\nPlease Enter your choice: ");
    scanf("%d",&lang);
    switch (lang)
    {
    case 1:
        printf("Available Hindi Movies:\n1. Chhaava\n2. Dhurandhar\n3. Homebound\nSelect a Movie (1 - 3): ");
        scanf("%d",&movie);
        switch (movie)
        {
        case 1:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Chhaava\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Chhaava\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        
        case 2:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Dhurandhar\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Dhurandhar\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;

        case 3:
           printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: HomeBound\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: HomeBound\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);   
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;

        default:
            printf("Invalid Movie Choice!\n");
            break;
        }
        break;

    case 2:
        printf("Available Marathi Movies:\n1. Natsamrat\n2. Zapatlela \n3. Sairat\nSelect a Movie (1 - 3): ");
        scanf("%d",&movie);
        switch (movie)
        {
        case 1:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Natsamrat\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);   
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Natsamrat\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        
        case 2:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Zapatlela\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);   
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Zapatlela\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        case 3:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Sairat\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Sairat\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;

        default:
            printf("Invalid Movie Choice!\n");
            break;
        }
        break;

    case 3:printf("Available Kanada Movies:\n1. Kantara\n2. Upendra \n3. KGF\nSelect a Movie (1 - 3): ");
        scanf("%d",&movie);
        switch (movie)
        {
        case 1:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Kantara\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Kantara\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        
        case 2:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Upendra\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Upendra\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        case 3:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: KGF\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: KGF\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;

        default:
            printf("Invalid Movie Choice!\n");
            break;
        }
        break;

    case 4:
        printf("Available Tamil Movies:\n1. Jailer\n2. Doctor \n3. Coolie\nSelect a Movie (1 - 3): ");
        scanf("%d",&movie);
        switch (movie)
        {
        case 1:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Jailer\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Jailer\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        
        case 2:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Doctor\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);   
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Doctor\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;
        case 3:
            printf("Enter the number of Tickets: ");
            scanf("%d",&ticket);
            if(ticket == 0)
            {
                printf("Invalid Number of Tickets. Exiting...\n");
                return 0;
            }
            printf("Select Seat Type:\n1. Regular (180 Rs)\n2. Premium (300 Rs)\nEnter Your Choice: ");
            scanf("%d",&seat_type);
            if (seat_type == 1)
            {
                amount = ticket * 180;
                printf("__________Booking Summary________\nMovie: Coolie\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",regular,ticket,amount);
            }
            else if(seat_type == 2)
            {
                amount = ticket * 300;
                printf("__________Booking Summary________\nMovie: Coolie\nSeat Type: %s\nNumber of Tickets: %d\nTotal Amount: %d\n",premium,ticket,amount);
            }
            else
            {
                printf("Invalid Seat Type!\n");
                return 0;
            }
            printf("Do you Want to Confirm Bookin (Y/N): ");
            scanf(" %c",&confirmation);
            if(confirmation == 'y' || confirmation == 'Y')
            {
                printf("Booking Confirmed! Enjoy your Movie.\n");
            }
            else
            {
                return 0;
            }
            break;

        default:
            printf("Invalid Movie Choice!\n");
            break;
        }
        break;

    default:
        printf("Invalid Language Choice!\n");
        break;
    }
    return 0;
}