// power.c -- 计算数的整数幂
#include <stdio.h>
// 前置声明，如果吧power函数放在main函数的前面，则可以不需要
// 前置声明，但不推荐这样做，不是C的标准风格
double power(double n, int p); // 函数原型

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        // 编译器编译到这里时，由于不知道power的返回值类型，所以需要前置声明告诉编译器
        // power的返回值类型为double,其定义在别处
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p) // 函数定义
{
    double pow = 1;
    int i;
    for (i = 1; i <= p; i++)
        pow *= n;
    return pow;
}