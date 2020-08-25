// 3.c -- use nested-loop print F
//                              FE
//                              FED
//                              FEDC
//                              FEDCB
//                              FEDCBA

#include <stdio.h>

int main(void)
{
    // use constant
    const int ROW = 6;
    for (int i = 0; i < ROW; i++)
    {
        for (char j = 'F'; j >= 'F'-i ; j--)
            printf("%c",j);
        
        printf("\n");
    }

    return 0;
}