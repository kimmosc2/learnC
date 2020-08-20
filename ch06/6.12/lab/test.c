// test.c -- 用代码表示以下测试条件
#include <stdio.h>

int main(void)
{
    int x = 6;
    double x2;
    // variable x greater than 5
    if (x > 5)
    {
        printf("x greater than 5\n");
    }

    // scanf read a double type named x2 and failed
    if (scanf("%f", &x2) != 1)
    {
        printf("x2 read failed\n");
    }


    // scanf read a int type and success
    if (scanf("%d"))
    {
        printf("scanf read int success\n");
    }
    return 0;
}