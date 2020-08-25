// 5.c -- write a program, prompt user input upper-case
// and use nested-loop print A
//                          ABA
//                         ABCBA
#include <stdio.h>

void printLetters(char ch);

int main(void)
{
    char target;
    printf("please input a capital letter:");
    if (scanf("%c", &target))
    {
        if (target <= 'Z' && target >= 'A')
        {
            printf("is letter!,value:%c\n", target);
            printLetters(target);
        }
        else if (target <= 'z' && target >= 'A')
        {
            printf("I need a upper case letter,but you write a lower case, you should input \"%c\" not \"%c\"\n", (('A' - 'a') + target), target);
        }
        else
        {
            printf("\"%c\" is not a letter!\n", target);
        }
    }
    else
    {
        printf("input error!");
    }

    return 0;
}

void printLetters(char ch)
{
    int row = 0 - ('A' - ch);
    // control row
    for (int i = 0; i <= row; i++)
    {
        // control white space
        for (int k = 0; k < row - i; k++)
        {
            printf(" ");
        }
        // control columns ABC
        for (int j = 'A'; j < 'A' + i + 1; j++)
        {

            printf("%c", j);
        }
        // display image for ABC
        for (int j = 'A' + i; j > 'A'; j--)
        {

            printf("%c", j - 1);
        }
        printf("\n");
    }
    return;
}