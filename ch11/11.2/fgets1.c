/* fgets1.c -- 使用fgets()和fputs() */
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    puts("Enter a string,please.");
    fgets(words,STLEN,stdin);
    printf("Your string twice");
    return 0;
}