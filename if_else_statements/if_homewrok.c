/*
Syntax: if statement
if (condition) {

// block of code to be executed if the condition is true

}

Key note: If the conditional evaluates to any non zero value, It is considered as True.

    1. WAP to check Two numbers are equal or not.
       i/p : 2 , 2
       o/p : Both are equal
       i/p : 2, 3
       o/p : 

    2. WAP to check the number is into the range or not. ( 0 to 100)
       i/p : 10 , 99 , 100 , 0 , -1
       o/p : Y , Y , Y , Y 
    
    3. WAP to check the person is eligible to vote or not.
       i/p : 18 , 50
       o/p : Y , Y

    4.  WAP to check ATM pin.
       i/p : 8008 , 800 , 0080, 8000
       o/p : Y , N , 
       
    5. WAP to show mobile batter low alert
       i/p : 14 , 0 , 50
       o/p : Alert , Alert
    
*/
#include<stdio.h>
int main(){
    
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);

    if(a == b){
        printf("The numbers %d and %d both are equal\n",a,b);
    }

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num >= 0 && num <= 100){
        printf("The number %d is in range\n",num);
    }

    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age >= 18){
        printf("The person is eligible to vote\n");
    }

    int pin;
    printf("Enter the pin: ");
    scanf("%d",&pin);
    if(pin != 8008){
        printf("Incorrect Pin\n");
    }

    int battery;
    printf("Enter the battery percentage: ");
    scanf("%d",&battery);
    if(battery <= 15){
        printf("Low Battery!\n");
    }

    return 0;
}