// only a little code
// switch注解:程序根据expression的值跳转至对应的case,执行相应的statement,在没有遇到break的情况下,顺序执行剩下的所有语句,
// 其中,expression和case标签都必须是整数值,标签必须是常量或者完全由常量组成的表达式,如果没有case标签与expression的值相匹配,
// 则跳转至default语句(如果有的话)
#include <stdio.h>

int main(void)
{
    char a = 'a';
    switch (a)
    {
    case '1':
        printf("Oh,is a number!");
        break;
    case 'a':
    case 'A': //多重标签
        printf("Your input a");
        break; // 如果注释掉break,则会继续执行case b中的statement,输出Your input b
    case 'b':
        printf("Your input b");
        break;

    default:
        break;
    }

    return 0;
}