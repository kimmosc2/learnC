/* r_driver1.c -- 测试rand1()和srand1()*/
/* 与 s_and_r.c 一起编译 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "s_and_r.c"
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u", &seed) == 1)
    {
        srand1((unsigned int)time(0)); /* 重置种子 */
        for (count = 1; count < 5; count++)
            printf("%d\n", rand1());
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");
}
