#include<stdio.h>
void main(){
    char ch;
    while(ch!='`')
    {
    printf("Enter the Character: ");
    scanf(" %c",&ch);
    printf("The Character: %c has ascii value: %d\n",ch,ch);}
}