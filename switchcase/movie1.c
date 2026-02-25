/*
    WAP to book movie ticket.
    
    Example:
    A. Action
    C. Comedy
    D. Drama
    H. Horror

    Input : ‘ H’
    Output: Available Horror movies: The Conjuring, Annabelle
    
    Input: ‘A’
    Output: Available Action movies: Mission Impossible, Fast & Furious
    
    Input: ‘Z’
    Output: No Such movie found
    
    Input: ‘1’
    Output: No Such movie found

*/
#include<stdio.h>
int main()
{
    char ticket;
    printf("Please Enter the Genre you want to watch: ");
    scanf("%c",&ticket);
    switch (ticket)
    {
    case ( 97 || 65 ):
        printf("Available Action Movies: Mission Impossible, Fast & Furious");
        break;
    
    default:
        printf("No Such Movie Found");
        break;
    }
    return 0;
}