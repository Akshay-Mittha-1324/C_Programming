#include<stdio.h>
int main(){
    /*
    int  num;
    printf("Enter the value: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("+ve\n");
    }
    else if(num < 0 )
    {
        printf("-ve\n");
    }
    else{
        printf("You have entered the zero\n");
    }
    */
   //WAP to check the number is even odd or zero

   /*WAP to create a grade system 
   0 to 30 fail
   31 to 50 'D'
   51 to 70 'C'
   71 to 90 'B'
   91 to 100 'A'
   int grade;
   printf("Enter the marks: ");
   scanf("%d",&grade);
   if(grade >= 0 && grade <= 30){
    printf("Fail\n");
   }
   else if(grade >= 31 && grade <= 50){
    printf("The grade is D\n");
   }
   else if(grade >= 51 && grade <= 70){
    printf("The grade is C\n");
   }
   else if(grade >= 71 && grade <= 90){
    printf("The grade is B\n");
   }
   else{
    printf("The grade is A\n");
   }
    */

   /*WAP to  find the discount suppose the amout is 5k if amount is greater than 5k give 20% discount if 
   amount is greater than 3k give 15% discount if amount is greater than 2k give 5% discount 
   and if the amount is 1k no discount
   
   float amount;
   printf("Enter the amount: ");
   scanf("%f",&amount);
   if(amount >= 5000){
        amount = amount - (amount * (0.20));
        printf("The amount is: %f\n",amount);
    }
    else if(amount >= 3000){
        amount = amount - (amount * (0.15));
        printf("The amount is: %f\n",amount);
    }
    else if(amount >= 2000){
        amount = amount - (amount * (0.05));
        printf("The amount is: %f\n",amount);
    }
    else{
        printf("The amount is: %f\n",amount);
    }
   */
/*
   WAP to find the garbage number between 3 numbers*/
   int n1,n2,n3,largest;
   printf("Enter the numbers: ");
   scanf("%d%d%d",&n1,&n2,&n3);
   if(n1 >= n2 && n1 >= n3)
   {
    largest = n1;
    printf("%d is the largest\n",n1);
   }
   else if(n2 >= n1 && n2 >= n3){
    largest = n2;
    printf("%d is the largest\n",n2);
   }
   else{
    largest = n3;
    printf("%d is the largest\n",n3);
   }
   printf("%d is the largest\n",largest);
   return 0;
}