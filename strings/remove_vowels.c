// TODO WAP to remove all vowels from string


#include<stdio.h>
void rem_vowels(char str[])
{
    int j = 0;
    for(int i = 0; str[i] != '\0' ; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for (int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("%s\n",str);
}
int main()
{
    char str[] = "Hello";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    rem_vowels(str);
    return 0;
}