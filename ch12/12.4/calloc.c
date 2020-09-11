// 分配内存还可以用calloc(),该函数接受两个无符号整数作为参数，第一个是所需的存储单元数量，第二个是存储的单元大小（以字节为单位）
#include <stdlib.h>

// 下面创建了100个4(long长度)字节的存储单元
long * newmen;
newmen = (long *)calloc(100,sizeof(long));
  
// calloc()还有一个特性，它把块中所有的位都设置为0