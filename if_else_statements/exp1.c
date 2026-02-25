//1. WAP to check if the number is divisible by both 5 and 10 or not

//2. WAP to check the number is positive or negative

/*3. WAP to check the num is positive even or positive odd.
     
     i/p -> 4 o/p -> positive even
     i/p -> 7 o/p -> positive odd.

  4. WAP to add the value 2 in a num if num is even o.r. add the value 3 in num 
     
     i/p -> 5 o/p -> 8
     i/p -> 4 o/p -> 6
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num % 5 == 0 && num % 10 == 0){
        printf("The number %d is divisible by both 5 and 10\n",num);
    }
    else{
        printf("The number %d is not divisible by both 5 and 10\n",num);
    }

    if(num > 0){
        printf("The number %d is Positive\n",num);
    }
    else{
        printf("The number %d is Negative\n",num);
    }

    if(num % 2 == 0 && num > 0){
        printf("The number %d is even Positive\n",num);
    }
    else{
        printf("The number %d is odd Positive\n",num);
    }

    if(num % 2 == 0){
        num = num + 2;
        printf("The value is %d\n",num);
    }
    else{
        num = num + 3;
        printf("The value is %d\n",num);
    }

    return 0;
}