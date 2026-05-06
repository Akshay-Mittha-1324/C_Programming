/*
    Structure Padding 
    - Adding the extra bytes is known as structure padding

    Structure Padding is Based on 3 following things
    - Based on the member arrangement
    - Based on largest member (highest datatype)
    - Also Based on Word size (Amount of data a processor can fetch and process at one time is known as word)

    - It is done for data alignment (Proper arrangement of data)
    - Quick and Fast accessing

    Bit Fields 
    - Memory allocation in bits
    - Bit fields can only with structures and unions
    - Bit fields can only used for integral data type (only for char and int)
    - Minimum memory allocation for a bit field member would be a byte can be broken or divided into 8 variables or 2 variables 
    - Maximum number of bits that can be used is based on size of the datatype (ex. char max will be 8 bits)
    - Default size is based on bitness of system or word size
    
    Eg. struct Nibble
    {
        unsigned char lower : 4;
        unsigned char upper : 4;
    };

    int main()
    {
        strcut Nibble nibble;

        nibble.lower = 0x02;
        nibble.upper = 0x0A;
    }

*/

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

#if 0

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

#if 0

struct Student
{
    char ch1;
    int id;
    char ch2;
};

int main()
{
    printf("%zu\n",sizeof(struct Student));
    return 0;
}

#endif

#if 0

struct Student
{
    char ch1;
    char ch2;
    int id;
};

int main()
{
    printf("%zu\n",sizeof(struct Student));
    return 0;
}

#endif

#if 0

struct Student
{
    char ch1;
    double id;
    char ch2;
};

int main()
{
    printf("%zu\n",sizeof(struct Student));
    return 0;
}


#endif

#if 0

struct Student
{
    char ch1;
    char ch2;   // ? After one byte it will pad 2 bytes
    double id;
};

int main()
{
    printf("%zu\n",sizeof(struct Student));
    return 0;
}
#endif

#if 0

// ? Bit Fields 
struct Nibble
    {
        unsigned char lower : 4;    // ? Will get stored in the lsb side
        unsigned char upper : 4;    // ? Will get stored in the msb side
    };
    int main()
    {
        struct Nibble nibble;

        nibble.lower = 0x02;
        nibble.upper = 0x0A;
    }

#endif

#if 0

struct Nibble 
{
    unsigned char lower : 4;
    unsigned char upper : 4;
};

int main()
{
    struct Nibble nibble;
    printf("Size of the Structure is %zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    unsigned lower : 4; // ? By default to integer datatype
    unsigned upper : 4;
};

int main()
{
    struct Nibble nibble;
    printf("Size of the structure is %zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    unsigned char v1    : 1;
    unsigned char v2    : 1;
    unsigned char v3    : 1;
    unsigned char v4    : 1;
    unsigned char v5    : 1;
    unsigned char v6    : 1;
    unsigned char v7    : 1;
    unsigned char v8    : 1;
};

int main()
{
    struct Nibble nibble;
    printf("%zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    unsigned lower : 6; 
    unsigned upper : 7;
};

int main()
{
    struct Nibble nibble;
    printf("Size of the structure is %zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    unsigned lower : 10;    // ? Will give compiler error due to width of the lower exceeds its type
    unsigned upper : 9;
};

int main()
{
    struct Nibble nibble;
    printf("Size of the structure is %zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    float lower : 10;   // ? Invalid type for the bit field only integral is allowed
    double upper : 9;
};

int main()
{
    struct Nibble nibble;
    printf("Size of the structure is %zu\n",sizeof(nibble));
    return 0;
}

#endif

#if 0

struct Nibble 
{
    char lower : 4; 
    char upper : 4;
};

int main()
{
    struct Nibble nibble;

    nibble.upper = 0x0A;    // ? Will store a negative number due to signed char so negative value is stored in the upper using 2's complement
    nibble.lower = 0x02;

    printf("%d\n%d\n",nibble.upper,nibble.lower);

    return 0;
}

#endif

#if 0

struct Nibble 
{
    char lower : 4;
    char upper : 4;
};

int main()
{
    struct Nibble nibble = {0x02, 0x0A};
    printf("%#o\n%#x\n",nibble.upper,nibble.lower);
    return 0;
}


#endif