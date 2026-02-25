// TODO Wap to calculate no. of words in the sentence

#include<stdio.h>
void count(char str[])
{
    int count = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            count++;
    }
    printf("Words in the sentence = %d\n",count);
}
void main()
{
    char str[] = "Attili Sattai Sattai";
    count(str);
}