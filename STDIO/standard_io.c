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

#if 1
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
    adgjdj      aoigjaihdh   adigaidhih

    1. WAP to print only one space between the words with out declaring the strings

    wc - word count 
    Number of words , Number of lines and Number of characters


    2. WAP to print the status of strings taken from user as similar as wc command of linux


    WAP to print the hello world with scrolling on the screen


    WAP to implement progress bar like loading
*/