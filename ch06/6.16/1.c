// 1.c -- create an array of 26 elements, save 26 lower-case letter and print all elements
#include <stdio.h>

int main(void)
{
    char letters[26];
    printf("%d\n",sizeof(letters));
    for (int i = 0; i < sizeof(letters); i++)
        letters[i] = 'a' + i;
    printf("\n");
    for (int j = 0;j < sizeof(letters);j++)
        printf("%c",letters[j]);
    

    return 0;
}