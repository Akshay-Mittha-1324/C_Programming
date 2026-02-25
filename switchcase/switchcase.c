/*
    Syntax:

    switch(expression)
    {
        case constant:
            statement(s);
            break;
        case constatnt:
            statement(s);
            break;
        default:
            statement(s);
    }
*/
#include<stdio.h>
void main(){
    char ch;
    printf("Enter the option (a,b): ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("You have Entered the option a\n");
        break;
    
    case 'a' + 1:
        printf("You have Entered the option b\n");
        break;

    default:
        printf("You have Entered the wrong option please enter the correct option!\n");
    }
}