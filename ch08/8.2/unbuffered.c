// unbuffered.c -- implement unbuffered input
#include <conio.h>
#include <stdio.h>

#define VK_UP 72
#define VK_DOWN 80
#define VK_LEFT 75
#define VK_RIGHT 77

int main(void)
{
    int ch;
    while ((ch = getch()) != 27)
    {
        if (ch == 224)
        {
            ch = getch();
            switch (ch)
            {
            case VK_UP:
                printf("\rpress U");
                break;
            case VK_DOWN:
                printf("\rpress D");
                break;
            case VK_LEFT:
                printf("\rpress L");
                break;
            case VK_RIGHT:
                printf("\rpress R");
                break;
            default:
                break;
            }
        }
        else
        {
            printf("\rpress %c", ch);
        }
    }
    return 0;
}