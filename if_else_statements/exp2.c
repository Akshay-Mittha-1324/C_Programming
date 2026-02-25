/*
    1. WAP to find the largest nuber between two number 
       
       i/p -> a = 2 b = 3 B is largest
       i/p -> a = 5 b = 1 largest is a

    2. WAP to check last digit of a number is even or odd
    
       i/p -> 153 3 is odd
       i/p -> 152 2 is even

    3. WAP to check the student is fail or pass (to pass marks should be >= 35)
       
       i/p -> 36 pass
       i/p -> 17 fail
    
    4. WAP to check the alphabet is uppercase or lowercase
    
       i/p -> 'a' o/p -> lowercase 
       i/p -> 'A' o/p -> uppercase

    5. WAP to check the two numbers are equal or not without using == operator
    
       i/p -> 2 3 o/p -> not equal 
       i/p -> 2 2 o/p -> equal   
*/
#include<stdio.h>
int main(){
    int a,b,largest;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    if(a > b)
    {
        largest = a;
        printf("The number %d is largest\n",a);
    }
    else{
        largest = b;
        printf("The number %d is largest\n",b);
    }

    int digit;
    printf("Enter the digit: ");
    scanf("%d",&digit);
    digit = digit % 10;
    if(digit % 2){
        printf("The digit %d is odd\n",digit);
    }
    else{
        printf("The digit %d is even\n",digit);
    }

    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks >= 35){
        printf("The student is pass\n");
    }
    else{
        printf("The student is fail\n");
    }

    char ch;
    printf("Enter the character: ");
    scanf(" %c",&ch);
    if(ch >= 'a' && ch <= 'z')
    {
        printf("The character %c is lowercase\n",ch);
    }
    else{
        printf("The character %c is in uppercase\n",ch);
    }

    int c,d;
    printf("Enter the numbers: ");
    scanf("%d%d",&c,&d);
    if(c - d){
        printf("The numbers %d and %d are not equal\n",c,d);
    }
    else{
        printf("The numbers %d and %d are equal\n",c,d);
    }

    return 0;
}