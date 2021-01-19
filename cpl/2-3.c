/* TODO: 详见21行*/

#include <stdio.h>
#include <string.h>



long htoi(char hex[]);
long power(int num, int n); ·

int main(void)
{
    char hex[10] = "abcdef";
    printf("hex:%s, decimal:%ld", hex, htoi(hex));
    return 0;
}

// htoi将16进制char数组转换为相应的值,如果遇到错误则立即返回0
long htoi(char hex[])
{
    /* TODO: 前面判断是否是0x，如果是，则把非0x部分copy到一个新数组里，下面循环来判断新数组 */
    long sum = 0;
    for (int i = 0; i < strlen(hex); i++)
    {
        /* a-f */
        if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            // printf("%d\n", (hex[i] - 'a' + 10) * power(16, strlen(hex) - (i + 1)));
            sum += (hex[i] - 'a' + 10) * power(16, strlen(hex) - (i + 1));
        }
        /* A-F */
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            // printf("%d\n", hex[i] - 'A' + 10 * power(16, strlen(hex) - (i + 1)));
            sum += hex[i] - 'A' + 10 * power(16, strlen(hex) - (i + 1));
        }
        /* 0-9 */
        else if (hex[i] >= '0' && hex[i] <= '9')
        {
            sum += (hex[i] - '0') * power(16, strlen(hex) - (i + 1));
            // printf("%d\n", (hex[i] - '0') * power(16, strlen(hex) - (i + 1)));
        }
        else
        {
            return 0;
        } 
    }
    return sum;
}

/* power返回m的n次方,如果n小于0，则返回0 */
long power(int m, int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    long p = m;
    for (int i = 1; i < n; i++)
    {
        p = p * m;
    }
    return p;
}