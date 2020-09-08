/* strptr.c -- 把字符串看做指针 */
#include <stdio.h>

int main(void)
{
    /* 用双引号括起来的内容被视为指向该字符串储存位置的指针 */
    printf("%s %p %c\n", "We", "are", *"space farers");
    return 0;
}