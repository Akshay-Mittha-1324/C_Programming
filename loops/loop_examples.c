/*
    0. WAP to implement the password verifier.

    1. WAP to implement the table in the proper representation.

    2. WAP to implement the Factorial of a Number.

    3. WAP to check the Prime Number.

    4. WAP to number is Prime or Not.

    5. WAP to print the numbers separately from a number.
*/

#include<stdio.h>
int main()
{
    /*
    int num,i=1;
    printf("Enter the Number to print the tables: ");
    scanf("%d",&num);
    for(;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,num * i);
    }
    */
    
    /*
    int fact = 1,num;
    
    //  Method 1:
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i = num;i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Method 1 using the decrement Operator:\nFactorial = %d\n",fact);
    
    // Method 2:
    fact = 1;
    for(int i= 1;i <= num;i++)
    {
        fact = fact * i;
    }
    printf("Method 2 using the increment Operator:\nFactorail = %d\n",fact);
    */

    /*
    int num,count=0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if(count == 2)  // if(count == 0){ prime number}
    {
        printf("%d is Prime Number!\n",num);
    }
    else
    {
        printf("%d is Non Prime!\n",num);
    }

    */

    int i = 1,num,count = 0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    while (i <= num)
    {
        if (num % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        printf("%d is Prime Number!\n",num);
    }
    else
    {
        printf("%d is not a Prime Number!\n",num);
    }


    /*
    int num = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        printf("%d\t",num % 10);
        num = num / 10;
    }
    printf("\n");
*/


    return 0;
}