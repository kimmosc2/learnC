#include <stdio.h>

int main(void)
{
    float a, b;
    b = 2.0e21 + 1.0;
    a = b - 2.0e21;
    printf("a:%f\n", a);
    return 0;
}