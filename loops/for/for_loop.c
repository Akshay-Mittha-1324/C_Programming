/*
    WAP to print
    1,2,3,4,5
    1,3,6,9,12
    2,4,8,16,32
    5,4,3,2,1    
*/

/*
#include<stdio.h>
void main()
{
    int i;
    for(i = 0; i <= 5; i++){
        printf("%d\n",i);
    }
    for(i = 0;i <= 4; i++)  //for(i = 0; i * 3 <= 12; i++){ pritf("%d\n",i * 3);}   for(i = 0 ; i <= 12; i+=3){printf("%d",i);}
    {
        if(i == 0){
            printf("%d\n",i+1);
        }
        else{
            printf("%d\n",i*3);
        }
    }
    for(i = 2; i <= 32; i*=2) 
    {
        printf("%d\n",i);
    }
    for(i = 5; i >= 1; i--)
    {
        printf("%d\n",i);
    }
}
*/

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5},i;
    for(i = 0; i < 5; i++);
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}