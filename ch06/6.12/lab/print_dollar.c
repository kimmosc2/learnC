// print_dollar.c -- print $$$$$$$
//                         $$$$$$$
//                         $$$$$$$
#include <stdio.h>

int main(void)
{
    int row = 3;
    int column = 7;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("$");
        printf("\n");
    }
    return 0;
}