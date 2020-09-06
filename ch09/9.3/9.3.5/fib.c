// fib.c -- 斐波那契数列
#include <stdio.h>

int main(void)
{

    return 0;
}

// 斐波那契数列(无缓存,双递归)double recursion
unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    return 1;
}