// partb.c -- 程序的其余部分
#include <stdio.h>

extern int count; // 引用式声明，外部链接

// total计算总的次数,不归0,subtotal每次传入负数会打印并归零
static int total = 0;   // 静态定义，内部链接
void accumulate(int k); // 函数原型

void accumulate(int k) // k具有块作用域，无连接
{
    static int subtotal = 0; // 静态，无连接
    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}