// lesser.c -- find the smaller of two integers
#include <stdio.h>

// int imin(int, int);
// 函数声明告知编译器函数的类型
int main(void)
{
    int imin(int, int);// 函数声明在主调函数中写也可以
    int evil1, evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
    return 0;
}

// 函数定义提供实际的代码
int imin(int n, int m)
{
    return n > m ? m : n;
}