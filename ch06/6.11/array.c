// array.c -- basic usage of array
#include <stdio.h>
int main(void)
{
    float debts[20]; // debts has 20 elements,start at 1 and ends at 19

    debts[5] = 32.54;
    debts[6] = 1.2e+21;

    scanf("%f",&debts[4]);
    printf("%1f",debts[4]);
    // warning:compiler 不会检查数组的下标(为了执行速度)
    debts[22] = 1.0;// compiler success,but runing failed
    return 0;
}