#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

struct Student
{
    short age;
    // short age2;
    int number;
    char sex;
    long number_long;
    char name[8];
};

typedef struct
{
    char name[40];
    int number;
} Teacher;

void changeStu(struct Student stu)
{
    stu.age = 1;
}

void changeTea(Teacher tea)
{
    tea.number = 1;
}

int main(void)
{
    struct Student s;
    s.age = 0;
    int a=0;
    // show_bytes((byte_pointer)&a,sizeof(s));
    printf("%#p\n",&(s.age));
    // printf("0x%p\n",&(s.age2));
    printf("0x%p\n",&(s.number));
    changeStu(s);
    printf("%d\n",s.age);
    return 0;
}