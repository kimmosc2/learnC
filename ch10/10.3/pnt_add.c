// pnt_add.c -- 指针地址
#include <stdio.h>
#define SIZE 4
int main(void)
{
    printf("short size:%d, double size:%d\n", sizeof(short), sizeof(double));
    short dates[SIZE];
    short *pti;
    dates[1] = 1;
    printf("dates:%d\n", *(dates + 1));
    short index;

    double bills[SIZE];
    double *ptf;

    pti = dates; // 把数组地址赋值给指针
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    return 0;
}