#include<stdio.h>
#include<string.h>

void reverse(char str[], int start, int end)
{
    while (start < end) // ? Loop will run till the start is less than end
    {
        char temp = str[start]; // ? Temp variable to store the char and swap it later using temp
        str[start] = str[end];
        str[end] = temp;
        start++;    // ? Incrementing to next index
        end--;  // ? Decrementing to previous index
    }
}

int main()
{
    char str[] = "Hello World"; 
    int start = 0;  // ? Initial Start index
    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ' ' || str[i + 1] == '\0') // ? To check both the condition where space and null char are checked
        {
            if(str[i + 1] == '\0')  // ? To check the next char is null char or not
                reverse(str,start,i);
            else
            {
                reverse(str,start,i - 1);   
                start = i + 1;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}