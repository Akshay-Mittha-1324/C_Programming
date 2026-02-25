#include<stdio.h>
int main(){
    /*
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num > 0){
        if(num % 2){
            printf("The number %d is positive odd!\n",num);
        }
        else{
            printf("The number %d is positive even!\n",num);
        }
    }
    else if(num  < 0){
        if(num % 2){
            printf("The number %d is negative odd!\n",num);
        }
        else{
            printf("The number %d is negative even!\n",num);
        }
    }
    else{
        printf("The number is Zero!: %d\n",num);
    }
    */

    /*WAP to check the largest number using nested if else*/

    int n1,n2,n3,largest;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1 > n2)
    {
        if(n1 > n3){
            largest = n1;
        }
        else{
            largest = n3;
        }
    }
    else{
        if(n2 > n3){
            largest = n2;
        }
        else{
            largest = n3;
        }
    }
    
    printf("%d is largest!\n",largest);

    return 0;
}