#include <stdio.h>

int fun(int,int *);

int fun(int x, int *p)
{
    return x + *p;
}

int (*fp)(int, int *);
fp = fun;

int main(void)
{

    int y = 1;
    int result = fp(3, &y);
    printf("%d\n",result);
    result = fp(3, &y);
    printf("%d\n",result);
    return 0;
}
