#include <stdio.h>

int main(void)
{
    int n = 0;

    // 注意分号的位置,删掉下一行的分号即可达到本来的目的
    while (n++ <3);
        printf("n is %d\n",n);
    printf("that's all this program does.\n");
    return 0;
}