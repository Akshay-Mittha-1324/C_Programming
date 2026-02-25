#include<stdio.h>
void main(){
    int option;
    printf("Enter the option:\n1. Head Message\t2. Leg Message\t3. Neck Message\n4. Thigh Message\t5. Full Body Message\t6. Tuk Tuk Message\t7. Exit\n");
    scanf("%d",&option);
    switch (option)
    {
        case 1:
            printf("You chose Head Message - 1000\n");
            break;
        
        case 2:
            printf("You chose Leg Message - 5000\n");
            break;

        case 3:
            printf("Neck Message - 4000\n");
            break;

        case 4: 
            printf("Thigh Message - 7700\n");
            break;
        
        case 5:
            printf("Full Body Message - 10000\n");
            break;

        case 6:
            printf("Tuk Tuk Message - 100\n");
            break;

        case 7:
            printf("Thank You visit again!\n");
            break;

        default:
            printf("The Message is not Available!\n");
    }

}