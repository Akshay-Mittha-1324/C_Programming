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

#if 0
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

#if 0

// ? ftell() function will tell the position it is pointing to (Which character it is pointing to).

int main()
{
    FILE *fp, *fc;
    fp = fopen("text.txt","r");
    fc = fopen("a.out","r");
    if(fp == NULL || fc == NULL)
    {
        perror("ERROR...");
        return -1;
    }
    char ch;
    printf("File Offset is at : %ld\n",ftell(fp));
    while ((ch = fgetc(fp)) != EOF);
    {
        fputc(ch,stdout);
    }
    fseek(fp,0L, SEEK_END); // ? This is used to direct
    printf("\nFile Offset is at : %ld %ld\n",ftell(fp),ftell(fc));    // ? This will return the size of file
    fclose(fp);
    return 0; 
}
#endif

#if 0
// ? To find the position of char c
int main()
{
    FILE *fp;
    fp = fopen("text.txt","r");
    if(fp == NULL)
    {
        perror("ERROR");
        return -1;
    }
    char ch;
    ch = fgetc(fp);
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 'c')
            printf("C is in the position : %ld\n",ftell(fp));
        //fputc(ch,stdout);
    }
    fclose(fp);
    return 0;
}
#endif

#if 0

// ? fprintf, fscanf() and rewind()

int main()
{
    int n1, n2;
    float n3;
    char str[10], oper, ch;
    FILE *fp;
    if((fp = fopen("new.txt","w+")) == NULL)
    {
        perror("ERROR");
        return -1;
    }
    fprintf(fp,"%d %c %d %s %f\n",2,'+',1,"is",1.1);
    
    rewind(fp); // ? This will rewind / make the pointer point to begining of the file
    
    fscanf(fp,"%d %c %d %s %f",&n1,&oper,&n2,str,&n3);

    printf("%d %c %d %s %f\n",n1,oper,n2,str,n3);
    fclose(fp);
    return 0;
}
#endif 

#if 0

// ? fseek() 

int main()
{
    int n1, n2;
    float n3;
    char str[10], oper, ch;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    } 
    fprintf(fp,"%d %c %d %s %f\n",2,'+',1,"is",1.1);
    
    fseek(fp,0L,SEEK_SET);  // ? 0L is long type casted with macro SEEK_SET / This statement is similar to rewind
    
    fscanf(fp,"%d %c %d %s %f",&n1,&oper,&n2,str,&n3);

    printf("%d %c %d %s %f\n",n1,oper,n2,str,n3);
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? fwrite() fread()
int main()
{
    int n1, n2, n3, n4;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    }
    scanf("%d %d",&n1,&n2);
    fwrite(&n1, sizeof(n1), 1, fp);
    fwrite(&n2,sizeof(n2), 1 , fp);
    rewind(fp);
    fread(&n3,sizeof(n3), 1, fp);
    fread(&n4, sizeof(n4), 1, fp);
    printf("%d %d\n",n3,n4);
    fclose(fp);
    return 0;
}
#endif

#if 0

// ? fread and fwrite using Structure 

struct Data
{
    int n1;
    char op;
    int n2;
    char str[10];
    float n3;
};
int main()
{
    struct Data d1 = {2 , '+', 1, "is", 1.1}, d2;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    } 
    fwrite(&d1, sizeof(d1), 1, fp);
    rewind(fp);
    fread(&d2, sizeof(d2), 1, fp);
    printf("%d %c %d %s %f\n",d2.n1,d2.op,d2.n2,d2.str,d2.n3);
    fclose(fp);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp, *fc;
    fp = fopen("new.txt","r");
    fc = fopen("n1.txt","w");
    if(fp == NULL || fc == NULL)
    {
        perror("ERROR");
        return -1;
    }
    char ch;
    while(fread(&ch , sizeof(ch), 1, fp) > 0)
    {
        fwrite(&ch, sizeof(ch), 1, fc);
    }
    fclose(fc);
    fclose(fp);
    return 0;
}
#endif

#if 1
int main()
{
    FILE *fp, *fc;
    fp = fopen("new.txt","r");
    fc = fopen("n1.txt","w");
    if(fp == NULL || fc == NULL)
    {
        perror("ERROR");
        return -1;
    }
    char ch;
    while(fread(&ch , sizeof(ch), 1, fp) > 0)
    {
        fwrite(&ch, sizeof(ch), 1, fc);
    }
    fclose(fc);
    fclose(fp);
    return 0;
}
#endif