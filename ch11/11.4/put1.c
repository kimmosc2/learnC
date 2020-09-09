// put1.c -- print strings and not add \n
#include <stdio.h>

void put1(const char *string)
{
    while (*string != '\n')
    {
        putchar(*string++);
    }
}