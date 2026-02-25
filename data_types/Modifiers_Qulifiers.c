/*Modifiers and Quailifiers*/
#include<stdio.h>

const int n;
const int n = 10;
const int n;

void main(){
    //char ch = -1;
    
    // Modifiers :

    unsigned char ch = -1;
    // Refer the book for the Explaination.
                            // Signed Result.   Unsigned Result.       
    printf("%d\n",ch);      // -1               255
    printf("%u\n",ch);      // Big Value        255
    printf("%hd\n",ch);     // -1               255
    printf("%hhd\n",ch);    // -1               -1
    printf("%hhu\n",ch);    // 255              255

    //Qualifiers
    //const int n;
    printf("%d\n",n);
    
}