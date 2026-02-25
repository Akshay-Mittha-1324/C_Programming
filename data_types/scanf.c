#include<stdio.h>
void main(){
    int n;
    char ch;
    printf("Please Enter the Number: ");    //Asking for input from the user 
    scanf("%d",&n); // Taking the input using the scanf function
    printf("Please Enter a character :");
    scanf(" %c",&ch);
    printf("The Character is :%c\nThe Number is : %d\n",ch,n);   //Printing the user's number.
    float f;
    scanf("%f",&f);
    printf("%f",f);
}