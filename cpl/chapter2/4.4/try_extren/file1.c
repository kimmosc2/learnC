#include <stdio.h>
#include <strings.h>
#include "file3.h"

extern int sp;
extern char val[];
extern int sp2;
extern char val2[];

int main(void)
{
    // int sp = 5;
    printf("sp =%d\tlen val :%d\n", sp, strlen(val));
    printf("sp2=%d\tlen val2:%d\n", sp2, strlen(val2));
    return 0;
}