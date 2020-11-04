/* fibonacci.c 利用递归计算斐波那契数列第n个值(无优化) 
    0 1 1 2 3 5 8 13 21 34 55 ...
    1 2 3 4 5 6 7  8  9 10 11 ...
*/
#include <stdio.h>

#define FIBNUM 35
unsigned long fib(int);

int main(void)
{

    printf("num:%d, value:%d\n", FIBNUM, fib(FIBNUM));
    return 0;
}

unsigned long fib(int n)
{
    if (n <= 0)
        return 0;
    if (n <= 3)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}