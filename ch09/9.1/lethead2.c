#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Meagpolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

// 形式参数(formal argument)
// 背调函数(called function)
void show_n_char(char ch, int num);

// 主调函数(calling function)
int main(void)
{
    int spaces;
    // 实际参数(actual argument)
    show_n_char('*', WIDTH); // 用符号常数作为参数
    putchar('\n');
    show_n_char(SPACE, 12); // 用符号常量作为参数
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2; // 计算机要跳过多少个空格
    show_n_char(SPACE, spaces);             // 用一个变量作为参数
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
        putchar(ch);
}