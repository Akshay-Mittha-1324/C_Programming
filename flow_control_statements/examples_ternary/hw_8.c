#include<stdio.h>
int main()
{
    int experience,salary = 40000;
    printf("Enter the experience: ");
    scanf("%d",&experience);
    (experience >= 10)? printf("Bonus: %g\n",(salary * ((float)15 / 100))) : (experience >= 5)? printf("Bonus: %g\n",(salary * ((float)10 / 100))) : (experience < 5)? printf("Bonus: %g\n",(salary * ((float)5 / 100))) : printf("Invalid input");
    return 0;
}