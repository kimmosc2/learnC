// cypher1.c -- 更改输入,空格不变
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();                  // read a character
    while ((ch = getchar()) != '\n') // when the line is not over
    {
        if (ch == SPACE)
            putchar(ch);            // keep character unchanged and output
        else
            putchar(ch + 1);        // change character to next character
        ch = getchar();             // get next character
    }
    putchar(ch); // print linefeed
    return 0;
}