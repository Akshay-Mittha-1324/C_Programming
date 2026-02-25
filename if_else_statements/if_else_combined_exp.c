#include<stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n%5 == 0 ){
        printf("The number %d is Divisible by 5\n",n);
    }
    else{
        printf("The number %d is not Divisible by 5\n",n);
    }

    if(n%10 == 0)
    {
        printf("The number %d is Divisible by 10\n",n);
    }
    else{
        printf("The number %d is Not Divisible by 10\n",n);
    }

    if(n>0)
    {
        printf("The number %d is Positive\n",n);
    }
    else{
        printf("The number %d is Negative\n",n);
    }

    if(n%2 == 0){
        printf("The value is %d and its divisible by 2 so %d + 2: %d\n",n,n,n+2);
        n = n + 2;
    }
    else{
        printf("The value is %d and its add by 3 so %d + 3 : %d\n",n,n,n+3);
        n = n + 3;
    }
    
    if(n%2 == 0 && n > 0)
    {
        printf("The number %d is positive Even!\n",n);
    }
    else{
        printf("The number %d is Positive Odd!\n",n);
    }

    int a,b;
    printf("Enter the 2 numbers: ");
    scanf("%d%d",&a,&b);
    if(a > b)
    {
        printf("The value %d is greater than %d\n",a,b);
    }
    else{
        printf("The value %d is greater than %d\n",b,a);
    }

    int rem = n%10;
    if(rem%2 == 0)
    {
        printf("The value is even!\n");
    }
    else{
        printf("The value is odd!\n");
    }
    
    if(n>=35)
    {
        printf("The student is pass\n");
    }
    else{
        printf("The student is fail!\n");
    }

    char ch;
    printf("Enter the char: ");
    scanf(" %c",&ch);

    if(ch >= 65 && ch <= 90)
    {
        printf("The alphabet is uppercase!\n");
    }
    if(ch >= 97 && ch <= 122)
    {
        printf("The alphabet is lowercase!\n");
    }

    if(a == b)
    {
        printf("The numbers  %d and %d are equal!\n",a,b);
    }
    else{
        printf("The numbers %d and %d are not equal!\n",a,b);
    }

    return 0;
}