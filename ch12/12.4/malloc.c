// malloc.c
// malloc()返回void指针，即通用指针
#include <stdlib.h>
// 用malloc创建一个数组,大小为30个double类型的值请求内存空间，并设置ptd指向该位置
double *ptd;
ptd = (double *)malloc(30 * sizeof(double));

// free释放malloc函数分配的地址，free的参数就是malloc的地址