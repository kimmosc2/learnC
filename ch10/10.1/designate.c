// designate.c -- 使用指定初始化器(C99)
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    // 这里[4] = 31, 30, 31，指4 = 31，5 = 30,6=31
    // 如果不设置MONTHS，编译器会自动推导数组大小，刚好装得下后面的数据
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);
    return 0;
}