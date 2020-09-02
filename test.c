#include <stdio.h>
#include <strings.h>
#define PRAISE "you are an extraordinary being."

int main(void)
{
    char name[40];
    printf("what's your name?\n");
    scanf("%s", name);
    printf("%s,%s", name, PRAISE);
    printf("[name:%s] [sizeof:%d] [strlen:%d]\n", name, sizeof(name), strlen(name));
    return 0;
}