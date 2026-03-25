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

#if 0

// ? Formatted I / O

int main()
{
    // char a[8] = "Hello";
    // printf(a);  // ? This will print the message 
    // printf("\n");
    // printf("%d\t%i\n",10,10);
    // printf("%e\t%E\n",1.2,1.2);
    // printf("%a\t%A\n",123.4,123.4);
    //printf("%hX\t%lX\t%llX\t%Lf\n",0XFFFFFFFF,0XFFFFFFFFl,0XFFFFFFFFFFFFFFFF,1.23456789L);     // ? Length Specifiers

    printf("Width Specifiers\n");
    printf("%3d\n%2d\n%d\n",1,1,1); // ? Width Specifiers
    printf("%3d\n%3d\n%3d\n",10,10,10);
    printf("%3d\n%3d\n%3d\n",100,100,100);
    printf("%10s\n","Hello");
    printf("%20s\n","Hello");
    printf("%*d\n%*d\n%*d\n",1,1,2,1,3,1);

    // ? Precision Specifiers
    printf("Precision Specifiers\n");
    printf("%3.1d\n%3.2d\n%3.3d\n",1,1,1);  // ? Fill the blocks after specifying the width and precision 
    printf("%.3f\n%.5f\n%.2f\n",1.9,2.5,3.1023);    // ? Display the numbers till the .number using precision
    printf("%12.8s\n","Hello World");   // ? Fill 8 blocks after width of number

    // ? Flags Specifiers
    printf("Flags Specifiers\n");
    printf("%#x\n%#X\n%#x\n", 0xA, 0xA, 10);
    printf("%#o\n", 8);
    printf("%-3d %-3d\n", 1, 1);    // ? -3d here means left alignment
    printf("%-3d %-3d\n", 10, 10);
    printf("%-3d %-3d\n", 100, 100);
    printf("% 3d\n", 100);
    printf("% 3d\n", -100); // ? _ space 3d will print the space before printing the value

    printf("Escape Sequences\n");
    printf("Hello\nWorld\n");   // ? newline sequence
    printf("Hello Emertxe\rWorld\n");   // ? Carriage Return 
    printf("Hello\tWorld\n");   // ? Tab space
    printf("Hello\bWorld\n");   // ? backspace
    printf("Hello\vWorld\n");   // ? vertical tab
    printf("Hello\fWorld\n");   // ? form feed
    printf("Hello\eWorld\n");   // ? escape
    printf("Hello\\World\n");   // ? to print slash
    printf("\"Hello World\"\n");    // ? to print the double quotes
    printf("\n80%%\n");
    return 0;
}

#endif

#if 0

// ? Loading screen

int main()
{
    int i;
    for(i = 1; i <= 100; i++)
    {
        printf("\rLoading [] %3d%%",i);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}

#endif

#if 0
int main()
{
    int num1 = 123;
    char ch = 'A';
    float num2 = 12.345;
    char string[] = "Hello World";
    printf("%d %c %f %s\n",num1 , ch, num2, string);
    printf("%+05d\n", num1);
    printf("%.2f %.5s\n", num2, string);
    return 0;
}

#endif
#if 0
int main()
{
    int ret;
    char str[] = "Hello world";
    ret = printf("%s\n",str);
    printf("THe previous printf() printed %d chars\n",ret);
    printf("%d\n",printf("Mumbai\n"));
    printf("%d %d\n",printf("Emertxe\n"),printf("Vikas\n"));
    return 0;
}
#endif

#if 1
int main()
{
    int num1 = 123;
    char ch = 'A';
    float num2 = 12.345;
    char string1[] = "sprintf() Test";
    char string2[100];
    sprintf(string2, "%d %c %f %s\n",num1 , ch, num2, string1); // ? It is stored into the string2 buffer
    printf("%s", string2);  // ? To print the buffer
    return 0;
}
#endif