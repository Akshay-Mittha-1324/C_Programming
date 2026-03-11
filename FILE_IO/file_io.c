#include<stdio.h>

#if 0
int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    if(fp == NULL)
    {
        printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0

int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    if(fp == NULL)
    {
        perror("ERROR");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");
    if(fp == NULL)
    {
        perror("ERROR...");
        printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0

int main()
{
    FILE *fp;
    fp = fopen("new.txt","a");
    if(fp == NULL)
    {
        perror("ERROR..");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0

// ? Printing the file contents on the screen

int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    if(fp == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    while(ch = fgetc(fp))
    {
        if(feof(fp))
            break;
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
#endif

#if 0

// ? Copying the file contents into another file

int main()
{
    FILE *fp;
    FILE *fptr;
    fp = fopen("new.txt","r");
    fptr = fopen("new1.txt","w");
    if(fp == NULL || fptr == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    
    while(ch = fgetc(fp))
    {
        if(feof(fp))
            break;
        fputc(ch, fptr);
    }
    
    printf("\n");
    fclose(fp);
    fclose(fptr);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    if(fp == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    while((ch = fgetc(fp)) != EOF)  // ? EOF is -1 
    {
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
#endif
#if 1
int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");
    char ch;
    ch = fgetc(fp);

    if(ferror(fp))
        fprintf(stderr,"ERROR... in reading file\n");

    //clearerr(fp); // ? If we comment this the error will show twice and uncomment will show error once

    if(ferror(fp))
        fprintf(stderr, "ERROR... in reading file\n");  // ? printf will print the content on standard output stream and fprintf will standard error , stand out put and other file

    fclose(fp);
    return 0;
}
#endif