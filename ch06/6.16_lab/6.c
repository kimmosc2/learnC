// 6.c print a table,print number's and square(second power)、cube(third power)
// the lower and upper limits are determined by user
// remark:only can use one for-loop

#include <stdio.h>

int main(void)
{
    int upper, lower;
    printf("please input table's upper limit:");
    if (!scanf("%d", &upper))
    {
        printf("I need a number");
        return 1;
    }
    printf("please input table's lower limit:");
    if (!scanf("%d", &lower))
    {
        printf("I need a number");
        return 2;
    }
    if (lower > upper)
    {
        printf("Your \"lower\" greater than \"upper\",i exchanged them for you.");
        int temp = lower;
        lower = upper;
        upper = temp;
    }

    printf("+--------+--------+--------+\n");
    printf("| number | square |  cube  |\n");
    for (int i = lower; i <= upper; i++)
    {
        printf("|--------+--------+--------|\n");
        printf("|%8d|%8d|%8d|\n", i, i * i, i * i * i);
    }
    printf("+--------+--------+--------+\n");
    return 0;
}