#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int len);
void reverse(char line[], int len);

int main(void)
{
    char line[MAXLINE];
    int len;
    while (len = getLine(line, MAXLINE))
    {
        reverse(line, len);
        printf("%s", line);
    }

    return 0;
}

void reverse(char line[], int len)
{
    int i;
    char swap;
    for (i = 0; i < len / 2; i++)
    {
        swap = line[i];
        line[i] = line[len - i - 1];
        line[len - i - 1] = swap;
    }
}

int getLine(char line[], int len)
{
    char c;
    int i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {

        line[i] = c;
        i++;
    }
    line[i] = '\0';
    if (c == EOF)
    {
        return 0;
    }
    else
    {
        return i - 1;
    }
}