// compute f(x) = a + a1 * x^1 + a2 * x^2 ... + an * x^n
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define MAXN 10 /* 最多存储的多项式系数 */
#define MAXK 10 /* 重复的次数 */

clock_t start, stop;
double duration;

double f1(int, double[], double);
double f2(int, double[], double);

int main(void)
{
    double a[MAXN];
    int i;
    for (i = 0; i < MAXN; i++)
        a[i] = (double)i;

    start = clock();
    for (int j = 0; j < MAXK; j++)
        f1(MAXN - 1, a, 1.1);
    stop = clock();
    
    duration = ((double)(stop - start))/_SC_CLK_TCK;
    printf("f1 ticket1:%ld,duration:%6.2e\n",stop-start,duration);

    start = clock();
    for(int j = 0;j < MAXK;j++)
        f2(MAXN-1,a,1.1);
    stop = clock();
    duration = ((double)(stop - start))/_SC_CLK_TCK;
    printf("f2 ticket1:%ld,duration:%6.2e\n",stop-start,duration);

    return 0;
}

// f1 返回一个多项式的和,其中n为多项式的项数,a为系数
double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 0; i <= n; i++)
        p += (a[i] * pow(x, (double)i));
    return p;
}

double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i = n; i > 0; i--)
        p = a[i - 1] + x * p;
    return p;
}