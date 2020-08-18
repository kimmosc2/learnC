#include <stdio.h>

int main(void)
{
    int value;
    double value_2;
    // 整数除时舍0,所以当计算到1/2时,0.5后面的小数被舍掉
    // 此时value=0,不满足条件,循环结束
    for (value = 36; value > 0; value /= 2)
        printf("%3d", value);
    printf("\n");
    // 小数除0时不舍0,即使到0.0000.....01时,只要计算机能够存储的
    // 小数的最后一位不为0,则value_2>0就一直成立
    for (value_2 = 36.0; value_2 > 0; value_2 /= 2.0)
        printf("%.3f ", value_2);
    return 0;
}