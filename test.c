#include <stdio.h>

int main(void)
{
    int zippo[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%d\n", *(zippo + 1));
    printf("%p", zippo + 1);
    return 0;
}