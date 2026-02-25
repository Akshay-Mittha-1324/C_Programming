/*
    WAP to implement the Customer Feedback System using Switch Case.

    Example:
    
    0. Really disappointed
    1. Not great, could be better.
    2. It was okay, nothing special.
    3. Pretty good! I liked it
    4. Absolutely amazing! Loved it!
    
    Input: 4
    Output: Absolutely amazing! Loved it!
    
    Input: 0
    Output: Really disappointed
    
    Input: 5
    Output: Invalid Input
    
    Input:-1
    Output: Invalid Input

*/
#include<stdio.h>

int main()
{
    int feedback;
    printf("Welcome to Feedback System:\nPlease Enter your Feedback Option (0 - 4): ");
    scanf("%d",&feedback);
    switch (feedback)
    {
    case 0:
        printf("Really Disappointed\n");
        break;
    
    case 1:
        printf("Not great, could be better.\n");
        break;

    case 2:
        printf("It was ok, Nothing Sepcial.\n");
        break;

    case 3:
        printf("Pretty Good! I liked it.\n");
        break;

    case 4:
        printf("Absolutely Amazing! Loved It!\n");
        break;

    default:
        printf("Invalid Input!\n");
        break;
    }
    return 0;
}