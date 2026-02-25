/*
    WAP to find the middle number (by value) of given 3 numbers
    i/p : 10 5 8
    o/p : 8
*/
#include<stdio.h>
int main(){
    int a,b,c,middle;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && b < c){
        if(a > c){
            middle = c;
        }
        else{
            middle = a;
        }
    }
    else{
        if(b > c && c < a){
            middle = b;
        }
        else{
            middle = c;
        }
    }
    printf("The middle value is %d\n",middle);
    
    return 0;
}