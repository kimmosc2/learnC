#include <stdio.h>

// 数组表示法
void copy_arr(double *target1, double *source, int);
// 指针表示法和指针递增的函数
void copy_ptr(double *target2, double *source, int);
// 目标数组名和原数组名和指向原数组最后一个元素后面元素的指针
void copy_ptrs(double *target3, double *source, double *ptr);

void printArray(double *arr, int n);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    printArray(target1, 5);
    copy_ptr(target2, source, 5);
    printArray(target2, 5);
    
    copy_ptrs(target3, source, source + 5);
    printArray(target3, 5);
    return 0;
}

void copy_arr(double target1[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
    return;
}

void copy_ptr(double *target2, double *source, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(target2 + i) = *(source + i);
    return;
}

void copy_ptrs(double *target3, double *source, double *ptr)
{
    int n, i;
    for (i = 0, n = ptr - source; i < n; i++)
        *(target3+i) = *(source+i);
    return;
}

void printArray(double *el, int size)
{
    int i;
    printf("printArray:[");
    for (i = 0; i < size; i++)
        printf("%3.1f ", *(el + i));
    printf("]\n");
}