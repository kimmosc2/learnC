// sum1.c -- 返回数组元素之和
#include <stdio.h>

int sum(int *arr,int n);

int main(void)
{

    int array[] = {1, 2, 3, 4, 5, 6};
    printf("lenth:%d\n", sum(array,sizeof(array)/sizeof(array[0])));
    // printf("lenth:%d\n", sizeof(array));
    // printf("lenth:%d\n", sizeof(int));
    return 0;
}

int sum(int arr[],int len)
{
    int sum = 0;
    for(int i = 0;i < len;i++)
    {
        sum += arr[i];
    }
    return sum;
    // for(int i = 0;i<sizeof(arr);i++)
}