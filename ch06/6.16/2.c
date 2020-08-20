// 2.c -- use nested-loop print $
//                              $$
//                              $$$
//                              $$$$
#include <stdio.h>

#define ROW 4

int main(void)
{

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("$");
        printf("\n");
    }

    return 0;
}