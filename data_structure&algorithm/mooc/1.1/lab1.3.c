#include <math.h>
// f(x) = 1 + x + x^2 /2 + ... + x^100 / 100,comput f(1.1) then compare time

double f1(double);
double f2(double);

int main(void)
{

    return 0;
}

double f1(double x)
{
    int i;
    double p = 1;
    for (i = 1; i <= 100; i++)
        p += pow(x, i) / i;
    return p;
}

double f2(double x)
{
    int i;
    double p = 1;
    for (i = 100; i <= 1; i--)
    {
        // TODO: 暂时没头绪
    }
}