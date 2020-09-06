// day_mon2.c -- 让编译器计算元素个数
#include <stdio.h>

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 31, 30, 31};
    // sizeof(days)返回整个数组的大小，以字节为单位，sizeof(days[0])返回数组中一个元素的大小
    for (int i = 0; i < sizeof(days) / sizeof(days[0]); i++)
        printf("Month %2d has %d days.\n", i + 1, days[i]);
    return 0;
}