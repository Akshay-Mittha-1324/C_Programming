#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x and y cordinate: ");
    scanf("%d%d",&x,&y);
    (x > 0 && y > 0)? printf("Point Lies in: Quadrant I\n") : (x < 0 && y > 0)? printf("Pint Lies in: Quadrant II\n") : (x < 0 && y < 0)? printf("Point Lies in: Quadrant III\n") : (x > 0 && y < 0)? printf("Point Lies in: Quadrant IV\n") : (x == 0 && y == 0)? printf("Point Lies in: Origin\n") : (x == 0 && y > 0)? printf("Point Lies in: Y-Axis\n") : (x > 0 && y == 0)? printf("Point Lies in: X-Axis\n") : printf("Invalid cordinate\n");
    return 0;
}