// TODO WAP to remove the word from the string

#include<stdio.h>
#include<string.h>
char * my_strstr(char str[],char sub[])
{
    int size = strlen(sub);
    int i,j;    // ? Declare the variables outside the loop
    for(i = 0; str[i] != '\0';i++)  // ? Taking the outerloop for main string
    {
        if(sub[0] == str[i])    // ? Checking the substring index with main string
        {
            for(j = 0; sub[j] != '\0'; j++) // ? Inner loop for checking with the next elements of substring with main string
            {
                if(str[i + j] != sub[j])    // ? Checking 
                {
                    i = i + j;
                    break;
                }
            }
            if(sub[j] == '\0')
            {
                int count = i;
                for(int k = 0; k <= size; k++)
                {
                    str[count] = str[count + 1];
                    count++;
                }
            }
        }
    }
    return NULL;
}
void main()
{
    char str[] = "hi how are you";
    char sub[] = "how";
    char *cptr = my_strstr(str,sub);
    if(cptr != NULL)
    {
        printf("%s\n",cptr);
    }
    else
    {
        printf("Sub string not found\n");
    }
}