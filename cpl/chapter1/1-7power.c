#include <stdio.h>

int power(m, n);

int main(void)
{
    printf("%d\n", power(2, 4));
    return 0;
}

int power(int base, int n)
{
    int result;
    result = base;
    for (result = 1; n > 0; n--)
        result = result * base;
    return result;
}