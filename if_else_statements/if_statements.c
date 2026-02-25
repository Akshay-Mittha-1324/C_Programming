#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    //Using the conditional statement.
    if(b == 0){
        printf("B value should not be zero!\nTry entering again for value b:");
        scanf("%d",&b);
    }
    printf("A divided by b is : %d\n",a/b);
    return 0;

   if(b)
   {
        printf("%d\n",a/b);
   }
   return 0;
}