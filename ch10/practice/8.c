#include <stdio.h>

#define MAX_LEN 7
#define TARGET_LEN 3
void copy_arr(double target1[], double source[], int n);

int main(void)
{
    double arr[MAX_LEN];
    // initialize array
    for (int i = 0; i < MAX_LEN; i++)
        arr[i] = (1 + i) * 1.1;
    double target[TARGET_LEN];
    copy_arr(target, arr + 2, 3);
    for (int i = 0; i < TARGET_LEN; i++)
        printf("%3.2f ", target[i]);
    return 0;
}

void copy_arr(double target1[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
    return;
}
