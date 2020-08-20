// 4.c -- use nested-loop print A
//                              BC
//                              DEF
//                              GHIJ
//                              KLMNO
#include <stdio.h>

#define ROW 5
int main(void)
{
    char letter = 'A';
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%c", letter++);
        printf("\n");
    }
    return 0;
}