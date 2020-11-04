// 1.1_a.c -- 设有一组N个数,确定其中第k个最大者
// 冒泡排序实现版

#include <stdio.h>
#define LENTH 6
#define NumK 3
int main(void)
{

    int array[LENTH] = {5, 1, 2, 3, 7, 9};

    for (int i = 0; i < LENTH; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < LENTH; i++)
        printf("%d ", array[i]);
    printf("\n");
    printf("k:%d value:%d\n", NumK, array[NumK]);
    return 0;
}