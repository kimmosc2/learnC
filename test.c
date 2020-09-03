#include <conio.h>
#include <stdio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
int main(void)
{

    int key;
    while ((key = getch()) != 3)
    {
        if (key == 224)
        {
            key = getch();
            switch (key)
            {
            case UP:
                printf("up");
                break;
            case DOWN:
                printf("down");
                break;
            case LEFT:
                printf("left");
                break;
            case RIGHT:
                printf("right");
                break;

            default:
                break;
            }
        }
        else
        {
            printf("%c",key);
        }
    }
    return 0;
}