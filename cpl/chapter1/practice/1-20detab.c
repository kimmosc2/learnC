/* detab.c -- 用空格代替制表符 */
#include <stdio.h>

#define TABINC 8
#define MAXNUM 1000
int main()
{
    char c;
    int i, spaceNum;
    char line[MAXNUM];
    i = 1;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            i = 1;
            putchar('\n');
            continue;
        }
        if (c == '\t')
        {
            spaceNum = TABINC - (i - 1) % TABINC;
            for (int j = 0; j < spaceNum; j++)
                putchar(' ');
            i+=spaceNum;
            continue;
        }
        putchar(c);
        i++;
    }

    return 0;
}
