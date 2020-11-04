/* 编写setbits(x,p,n,y),该函数返回:将x中从第p位开始的n个(二进制)位设置为y中最右边n位的值,x的其余各位保持不变 */
#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    setbits(0, 0, 0, 1);
    return 0;
}

/* 将x中从第p位开始的n个(二进制)位设置为y中最右边n位的值,x的其余各位保持不变 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    printf("%u\n", y | ~0);
    /* ~(~0 << n) & y 这里是y中最右边n位的值 */
    /* TODO: 没写完,屏蔽p+n后面的位,然后右移p位就能得出从p开始n位的位置了 */
    
}