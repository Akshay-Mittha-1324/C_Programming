#include<stdio.h>
void main(){
    int num = 10;
    char ch = 1;
    float f = 2.5;
    double d = 2.3456;
    printf("The number is %d\n",num);
    printf("The Character is %c\n",ch);
    printf("The float value is %.1f\n",f);
    printf("The double value is %.3lf\n\nAll the printf Statements in the one Line:\n\n",d);
    printf("The int value is %d\nThe chararacter is %c\nThe float value is %.1f\nThe double value is %.3f\n",num,ch,f,d);
}