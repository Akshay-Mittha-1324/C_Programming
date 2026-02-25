// WAF to check character is vowel
#include<stdio.h>
void vowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The %c is vowel!\n",ch);
    }
    else
    {
        printf("The %c is not a vowel!\n",ch);
    }
}
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    vowel(ch);
    return 0;
}