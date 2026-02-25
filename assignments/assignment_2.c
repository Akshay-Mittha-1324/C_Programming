#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter the Nth Day: ");
    scanf("%d",&N);
    if(N <= 0 || N > 365)
    {
        printf("Invalid Input The input should be > 0 and <= 365\n");
        return 0;
    }
    printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the Start Day: ");
    scanf("%d",&n);
    if(n <= 0 || n > 7)
    {
        printf("Invalid Input the input should be > 0 and <= 7\n");
        return 0;
    }
    n = ((n + N) - 1) % 7;
    switch(n)
    {
    case 1:
        printf("The day is Sunday\n");
        break;
    
    case 2:
        printf("The day is Monday\n");
        break;
        
    case 3:
        printf("The day is Tuesday\n");
        break;

    case 4:
        printf("The day is Wednesday\n");
        break;

    case 5:
        printf("The day is Thursday\n");
        break;

    case 6:
        printf("The day is Friday\n");
        break;

    case 0:
        printf("The day is Saturday\n");
        break;
    
    default:
        printf("Error Occured!\n");
        break;
    }
    return 0;
}