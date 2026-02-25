// TODO WAP to check two string are equal or not

#include<stdio.h>
#include<string.h>
void is_equal(char str[],char str1[],int size1)
{
    int flag = 0;
    for(int i = 0;i < size1; i++)
    {
        if(str[i] != str1[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}
int main()
{
    char str[25];
    char str1[25];
    scanf("%[^\n]s",str);
    scanf(" %[^\n]s",str1);
    printf("%s\n",str);
    int size1 = strlen(str);
    int size2 = strlen(str1);
    if(size1 != size2)
    {
        printf("Size not equal\n");
        return 0;
    }
    is_equal(str,str1,size1);
    return 0;
}