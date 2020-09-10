// r_drive0.c -- 测试rand0()函数
#include <stdio.h>
#include "rand0.c"
extern unsigned int rand0(void);

int main(int argc, char const *argv[])
{
    int count;
    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());
    return 0;
}
