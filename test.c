#include <stdio.h>
#include <string.h>

int main(void)
{
    char somebox[40] = {"111"};
    printf("%s\n", somebox);
    strcat(somebox, "abc");
    printf("%s\n", somebox);
    return 0;
}