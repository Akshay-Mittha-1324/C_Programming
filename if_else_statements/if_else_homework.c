/*
If Else
Syntax:
    if (condition)
    {
        // code if condition is true
    }
    else
    {
        // code if condition is false
    }    

    1. WAP to check the number is even or odd? 
       
       i/p : 2 , 3
       o/p : even , odd
    
    2. WAP to check the student is passed (Should get 35 or more than 35) Marks or not.
       
       i/p : 35 , 12 , 0 
       o/p : pass , fail , fail
       
    3. WAP to check the student is present or not
       
       i/p : Y , N , y , n
       o/p : Present , Absent , Present , Absent
       
    4. WAP to check the person can withdraw amount from ATM or not. If yes show the available balance.
       
       i/p : Balance: 50000  Withdraw : 10000 , B = 500 W = 100 , B = 500 W = 6000
       o/p : The balance is 40000 , The balance is 400 , Insufficient Balance

    5. WAP to LED turns ON if button is pressed.

       i/p : 1 , 0
       o/p : On , Off

*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    if(num % 2){
        printf("The number %d is Odd!\n",num);
    }
    else{
        printf("The number %d is Even!\n",num);
    }

    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    
    if(marks >= 35){
        printf("Student Passed!\n");
    }
    else{
        printf("Student Failed!\n");
    }

    char present;
    printf("Enter if student is present or absent: ");
    scanf(" %c",&present);
    
    if(present == 'Y' || present == 'y'){
        printf("Student is Present!\n");
    }
    else{
        printf("Student is Absent!\n");
    }

    int balance,withdraw;
    printf("Enter the Balance: ");
    scanf("%d",&balance);
    printf("Enter the Withdraw amount: ");
    scanf("%d",&withdraw);

    if(balance > withdraw){
        balance = balance - withdraw;
        printf("The available balance is: %d\n",balance);
    }
    else{
        printf("Insufficient Balance!\n");
    }

    char button;
    printf("Enter the button state: ");
    scanf(" %c",&button);

    if(button != '1'){
        printf("The LED is OFF!\n");
    }
    else{
        printf("The LED is ON!\n");
    }


    return 0;
}