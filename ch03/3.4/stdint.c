// C99新加入的stdint.h & inttypes.h
// #include <stdio.h>
#include <inttypes.h> // 支持可移植类型,里面包含了stdint.h

int main(void)
{
    // int32_t 代表32位的有符号整数类型,在32位int的系统上,头
    // 文件会把int32_t作为int的别名,在16位int,32位long的系统
    // 上,会把int32_t作为long的别名.
    int32_t a = 0; // 精确宽度整数类型(exact-width integer type)

    // int_least8_t 是可容纳8位有符号整数值的类型中宽度最小的
    // 类型的一个别名、如果某系统的最小整数类型是16位,可能不会
    // 定义int8_t类型,但依旧能使用int_least8_t类型,但可能把该
    // 类型实现为16位的整数类型.
    int_least8_t b = 0; // 最小宽度类型(minimum width type)

    // 系统中对8位有符号值而言运算最快的整数类型的别名
    int_fast8_t c = 0; // 最小最快宽度类型(fastst minimum width type)

    intmax_t d = 0; // 最大有符号整数类型

    uintmax_t e = 0; // 最大无符号整数类型


    
    return 0;
}