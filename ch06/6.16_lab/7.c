// 7.c -- read a word into a character array,print the word reverse order
#include <stdio.h>
#include <string.h>
int main(void)
{
    char word_array[20];
    printf("",scanf("%s",&word_array));
    for(int i = strlen(word_array); i > 0;i--)
        printf("%c",word_array[i-1]);
    return 0;
}