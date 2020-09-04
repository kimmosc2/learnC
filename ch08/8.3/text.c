// text.c -- 处理格式不正确的字符(书上例子更改)
#include <stdio.h>

long get_long(void);

int main(void)
{
    printf("%d",get_long());
    return 0;
}

long get_long(void)
{
    long input;
    while ((scanf("%ld", &input)) != 1)
    {
       getchar();
    }
    return input;
}