/* 编写一个程序,删除每个输入行末尾的空格及制表符,并删除完全是空格的行 */
#include <stdio.h>

#define MAXLEN 1000

int getLine(char line[], int len);
int removes(char line[]);

int main(void)
{
    char c;
    char line[MAXLEN];
    while (getLine(line, MAXLEN))
    {
        if (removes(line))
            printf("%s", line);
    }
    return 0;
}

int getLine(char line[], int len)
{
    int i;
    char c;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c != ' '; i++)
        line[i] = c;
    if (c == '\n')
    {

        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    if (c == EOF)
        return 0;
    else
        return 1;
}

int removes(char line[])
{
    int i = 0;
    for (i = 0; line[i] != EOF && line[i] != ' ' && line[i] != '\n'; i++)
        ;
    return i;
}