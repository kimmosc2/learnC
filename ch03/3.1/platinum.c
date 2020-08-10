/* platinum.c -- your weight in platinum */
#include <stdio.h>

int main(void)
{
    float weight; /* 你的体重 */
    float value;  /* 相等重量的白金价值 */

    printf("Please enter your weight in pounds: ");

    /* 获取用户输入 */
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);

    return 0;
}