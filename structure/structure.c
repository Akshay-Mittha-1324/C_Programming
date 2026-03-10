#include<stdio.h>
#include<string.h>

// struct student
// {
//     int id;
//     char name[20];
//     char address[20];
// };
#if 0
void main()
{
    struct student s1, s2;
    printf("%zu\n",sizeof(s1));
    printf("%zu\n",sizeof(struct student));
}
#endif
#if 0
void main()
{
    struct student s1, s2;
    s1.id = 134;
    strcpy(s1.name,"Arjun");
    strcpy(s1.address,"Banglore");
    printf("%d %s %s\n",s1.id,s1.name,s1.address);
    
    s2.id = 143;
    strcpy(s2.name,"Vada Pav");
    strcpy(s2.address,"Mumbai");
    printf("%d %s %s\n",s2.id,s2.name,s2.address);
}
#endif
#if 0
void main()
{
    struct student s1 = {134, "Rohit", "Mumbai"};   // ? By following the order of data members
    struct student s2 = {.name = "Arjun", .id = 143, .address = "Banglore"};    // ? Without following the order of data members
    printf("%d %s %s\n%d %s %s\n",s1.id,s1.name,s1.address,s2.id,s2.name,s2.address);  
}
#endif

#if 0
void main()
{
    struct student s1 = {134, "Rohit", "Mumbai"};   
    struct student s2 = {.name = "Arjun", .id = 143, .address = "Banglore"}; 

    printf("%p is address of s1 using the s1 variable\n%p is address of s1 using .id\n\n",&s1,&s1.id);  // ? address of s1 is same as first data member of s1
    printf("%p is address of s1 using the s2 variable\n%p is address of s2 using .id\n",&s2,&s2.id);    // ? address of s2 is same as first data member of s2
}
#endif
#if 0
void main()
{
    struct student s1 = {134, "Rohit", "Mumbai"};   
    struct student s2 = {.name = "Arjun", .id = 143, .address = "Banglore"};
    
    printf("Address of s1 : \n%u\n%u\n%u\n%u\n",&s1,&s1.id,&s1.name,&s1.address);
    printf("Address of s2 : \n%u\n%u\n%u\n%u\n",&s2,&s2.id,&s2.name,&s2.address);
}
#endif

#if 0
void main()
{
    // ? Taking the input from the user
    
    struct student s;
    scanf("%d",&s.id);
    scanf("%s",s.name);
    scanf("%s",s.address);

    printf("%d %s %s\n",s.id,s.name,s.address);
}
#endif

#if 0

// ? Pass by value function modify of sturcture

void modify(struct student  s)
{
    s.id = 5;
    printf("%d\n",s.id);
}
void main()
{
    struct student s = {1,"Arjun", "Banglore"};
    printf("%d\n",s.id);
    modify(s);
    printf("%d\n",s.id);
}
#endif

#if 0

// ? Using the pointer and printing the values using the pointer 

void main()
{
    struct student s = {1,"Arjun", "Banglore"};

    printf("%d\n",(*ptr).id);
    printf("%d\n",ptr -> id);

    printf("%s\n",(*ptr).name);
    printf("%s\n",ptr -> name);
}
#endif

#if 0

// ? Pass by reference

void modify(struct student  *s)
{
    s -> id = 5;    // ? we can also use (*s).id = 5;
}
void main()
{
    struct student s = {1,"Arjun", "Banglore"};

    printf("%d\n",s.id);

    modify(&s); // ? Passing the reference of structure

    printf("%d\n",s.id);
}
#endif

#if 0

struct student
{
    int id;
    char name[20];
    char address[20];
}s; // ? This is a global variable declaration & We can also initialize the values here also s = {using the order / without using the order};
void disp()
{
    printf("%d\t%s\t%s\n",s.id,s.name,s.address);
}
void new(void)
{
    printf("%d\n",s.id);
}
void main()
{
    s.id = 1;
    strcpy(s.name,"Arjun");
    strcpy(s.address,"Banglore");
    disp();
    new();
}
#endif

#if 0
struct Student
{
    int id;
};
void data(struct Student s1)
{
    s1.id = 10;
    printf("In function using pass by value = %d\n",s1.id); // ? Variable of Structure is modified within function it will not reflect in main 
}
void main()
{
    struct Student s;
    data(s);
    printf("In main = %d\n",s.id);
}
#endif

#if 0
struct Student
{
    int id;
};
void data(struct Student *s)
{
    s -> id = 10;
    printf("In function using pass by reference = %d\n",s->id); // ? Pointer is used to modify the actual variable of main 
}
void main()
{
    struct Student s;
    data(&s);
    printf("In main = %d\n",s.id);
}
#endif

// struct Student 
// {
//     int id;
//     char name[20];
//     char address[60];
// };

#if 0
struct Student data()
{
    struct Student s = {10};
    return s;
}
void main()
{
    struct Student s;
    s = data();
    printf("Student id = %d\n",s.id);
}
#endif

#if 0
void read_data(struct Student *s)
{
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&s[i].id);
        scanf("%s",s[i].name);
        scanf("%s",s[i].address);
    }
}
void print_data(struct Student *s)
{
    for(int i = 0; i < 5; i++)
    {
        printf("Id = %d\nName = %s\nAddress = %s\n",s[i].id,s[i].name,s[i].address);
    }
}
void main()
{
    struct Student s[5];    // ? Structure Array
    read_data(s);
    print_data(s);
}
#endif

// ? Nested Structure
struct College
{   
    struct Student
    {
        int id;
        char name[20];
        char address[60];
    }student;
    struct
    {
        int id;
        char name[20];
        char address[60];
    }faculty;
};
#if 1
void main()
{
    struct College member;
    member.student.id = 10;
    member.faculty.id = 20;
    printf("%d\t%zu\n",member.student.id,sizeof(struct College));
    printf("%d\t%zu\n",member.faculty.id,sizeof(struct Student));
}
#endif
#if 0

// ? Nested Structure same declaration in different format
struct Student
{
    int id;
    char name[20];
    char address[60];
};
struct College
{
    struct Student s;
};

#endif