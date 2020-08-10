#include <stdio.h>
#include <string.h> // privide function strlen()
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    printf("What's your name?\n");
    scanf("%s",name);

    printf("Hello,%s. %s\n",name,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
    printf("The praise has %zd letters ",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);

    // sizeof 运算符的运算对象是类型时,需要加括号，是特定量时，如变量名等不需要加括号,但建议都加
    // printf(sizeof(char));
    return 0;
}