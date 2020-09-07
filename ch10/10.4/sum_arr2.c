// sum_arr2.c
// 如果编译器不支持用%zd,用%u或%lu替换
#include <stdio.h>

#define SIZE 10

int sum(int *start, int *end);

int main(void) {
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sum(marbles, marbles + SIZE);
    printf("The hotel number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return 0;
}

int sum(int *start, int *end) // 这个数组的大小是?
{

    int total = 0;
    // end指向数组最后一个元素的下一个位置，
    // 注意：虽然C保证了marbles + SIZE有
    // 效，但是对于marbles[SIZE],即存储在该位置上的值未做任何保证
    // 所以程序不能访问该位置
    while (start < end) {
        // 还可以把循环体压缩成一行代码:
        // total += *start++;
        total += *start;
        start++;
    }
    return total;
}