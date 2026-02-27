#include<stdio.h>
void main()
{
    int num = 10;
    float f = 3.5;  // ? Double is type casted to lower rank due to assignment 

    printf("%f\n",f + num); // ? Float has higher rank than int so int is promoted to higher rank of same rank as float
    
    char ch = 65;   // ? Integer value is type casted to lower rank

    printf("%d\n",ch);   
    printf("%f\n",num + 3.5); // ?  
}