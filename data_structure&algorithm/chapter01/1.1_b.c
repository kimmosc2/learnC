/* 1.1_b.c -- 把前k个元素读入数组中，并以递减的顺序对其进行排序，接着将剩下的元素逐个读入
    如果它小于数组中的第k个元素则忽略，否则将其放到正确的位置上
 */
#include <stdio.h>
#define NumK 5
#define DATALEN 10

int main(void)
{
    int list[NumK] = {};
    int data[DATALEN] = {9, 6, 3, 6, 12, 6, 3, 7, 243, 7};
    // cursor of data
    for (int i = 0; i < DATALEN; i++)
    {
        // cursor of Numk
        for (int j = NumK; data[i] > list[j]; j--)
        {
            // if(list[j-1] > data[i]){
            //     list[j] = data[i];
            // }
            
        }
    }
    for (int i = 0; i < NumK; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}