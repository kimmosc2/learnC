#include <stdio.h>

struct S1
{
    int i;
    double d;
    char c;
    int j;
};

int main(void)
{
    struct S1 s;
    s.i = 1;   // 4 byte. no memory hole in this case
    s.c = '1'; // 1 byte, so there is a memory hole of 3 byte
    s.j = 1;   // 4 byte, no memory hole in this case
    // if you addition a double field after S1.i, this will produce a memory hole of 4 byte 
    // s.d = 1.0;
    printf("%p\n", &s.i);
    // printf("%p\n", &s.d);
    printf("%p\n", &s.c);
    printf("%p\n", &s.j);
    return 0;
}