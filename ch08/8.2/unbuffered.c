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
                printf("\rU");
                break;
            case VK_DOWN:
                printf("\rD");
                break;
            case VK_LEFT:
                printf("\rL");
                break;
            case VK_RIGHT:
                printf("\rR");
                break;
            default:
                break;
            }
        }
        else
        {
            printf("\r%c", ch);
        }
    }
    return 0;
}