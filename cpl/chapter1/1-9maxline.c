#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int lim);
void copy(char to[], char from[]);
int main(void)
{
    int len;
    int max;
    char line[MAXLEN];
    char longest[MAXLEN];

    max = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);

    return 0;
}

int getline(char line[], int lim)
{
    char c;
    int i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}