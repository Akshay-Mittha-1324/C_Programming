#include<stdio.h>
void main(){
    char ch;
    int a,b;
    printf("Enter the 2 numbers: ");
    printf("Enter the option(+ , -, *, /): ");
    scanf("%d%c%d",&a,&ch,&b);
    switch (ch)
    {
    case '+':
        a = a + b;
        printf("The addition is %d\n",a);
        break;
    
    case '-':
        a = a - b;
        printf("The Subtraction is %d\n",a);
        break;
    
    case '*':
        a = a * b;
        printf("The Multiplication is %d\n",a);
        break;
    
    case '/':
        if(b){
            a = a / (float) b;
            printf("The Division is %d\n",a);
        }
        else{
            printf("Cannot divide by Zero!\nTry again by entering non zero value: ");
            scanf("%d",&b);
            float a = a / (float) b;
            printf("The Division is %f\n",a);
        }
        break;
        
    default:
        printf("Please enter the correct option\n");
        break;
    }

}