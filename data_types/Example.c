/*Modifiers and Quailifiers*/
#include<stdio.h>

void main(){
    char ch = -1;
    //unsigned char ch = -1;
    // Refer the book for the Explaination.
                            // Signed Result.   Unsigned Result.       
    printf("%d\n",ch);      // -1               255
    printf("%u\n",ch);      // Big Value        255
    printf("%hd\n",ch);     // -1               255
    printf("%hhd\n",ch);    // -1               -1
    printf("%hhu\n\n",ch);    // 255              255
    short num = 0x1234;
    printf("%d\n",num);
    int a = 0x30;
    float b = 1.5;
    char c = 0;
    c += b += a;
    printf("%c",c);
}