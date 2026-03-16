#include<stdio.h>
#include<ctype.h>
#include<unistd.h>

// ? Unformatted Input 

#if 0
void main()
{
    int ch;
    for(; (ch = getchar()) != EOF;)
    {
        putchar(toupper(ch));   // ? To exit the loop press Ctrl + d
    }
    puts("EOF Received!\n");
}
#endif

#if 0
void main()
{
    int ch;
    for(; (ch = getc(stdin)) != EOF;)   // ? We can use \n till the user enter the enter it will run forever
    {
        putc(toupper(ch), stdout);  // ? We can also mention different stream like stderr
    }
    puts("EOF Received\n");
}
#endif
#if 0
void main()
{
    char str[10];

    puts("Enter the String: ");
    gets(str);  // ? This is dangerous because it will ignore the limit of the specified character
    puts(str);
}
#endif

#if 0
void main()
{
    char str[10];
    puts("Enter the String: ");
    fgets(str, 10 , stdin);
    puts(str);
}
#endif

// ? Formatted Input starts from here 

#if 0
void main()
{
    char str[10] = "Hello";
    printf("%s\n",str);
}
#endif

#if 0
void main()
{
    while(1)
    {
        putc('A',stdout);
        sleep(1);
    }
}
#endif

#if 0
void main()
{
    while(1)
    {
        putc('A', stderr);
        sleep(1);
    }
}
#endif


/*
    chennai      bangalore   mumbai

    1. WAP to print only one space between the words with out declaring the strings

    wc - word count 
    Number of words , Number of lines and Number of characters


    2. WAP to print the status of strings taken from user as similar as wc command of linux


    3. WAP to print the hello world with scrolling on the screen


    4. WAP to implement progress bar like loading
*/

#if 0

// ? Q1 Printing only one space without using the string

int main()
{
    int ch, flag = 1;
    for(; (ch = getchar()) != EOF; )
    {
        if(ch == ' ' || ch == '\t' && flag)
        {
            putchar(' ');
            flag = 0;   // ? This will print only one space
        }
        if(ch != ' ' && ch != '\t')
        {
            putchar(ch);
            flag = 1;   // ? This will make the flag 1 for next space
        }
    }
    puts("\n");
    return 0;
}
#endif

#if 0

// ? Word count and line count program

int main()
{
    int ch, count = 0, line = 0;
    for(; (ch = getchar()) != EOF; )
    {
        if(ch)
            count++;
        if(ch == '\n')
            line++;
        putchar(ch);
    }
    puts("\n");
    printf("Number of char = %d\nNumber of lines = %d\n",count,line);
    return 0;
}
#endif

#if 1

// ? Formatted I / O

int main()
{
    char a[8] = "Hello";
    printf(a);  // ? This will print the message 
    printf("\n");
    printf("%d\t%i\n",10,10);
    printf("%e\t%E\n",1.2,1.2);
    printf("%a\t%A\n",123.4,123.4);
    printf("%hX\t%lX\t%llX\t%Lf\n",0XFFFFFFFF,0XFFFFFFFFl,0XFFFFFFFFFFFFFFFF,1.23456789L);
    return 0;
}

#endif