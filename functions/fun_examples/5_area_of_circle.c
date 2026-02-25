// WAF to find the area of circle
#include<stdio.h>
void area_of_circle(int r)
{
    const float pi = 3.14; 
    printf("Area of Circle = %f\n",pi * (r * r));
}
int main()
{
    int r;
    printf("Ente the radius: ");
    scanf("%d",&r);
    area_of_circle(r);
    return 0;
}