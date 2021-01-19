/* 6.c -- reverse array */
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 10
void reverse(double *, int);

int main(void)
{
    double arr[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++)
        arr[i] = (i + 1) * 2.2;
    reverse(arr, MAX_LEN);
    for (int i = 0; i < MAX_LEN; i++)
        printf("%f ", arr[i]);
    return 0;
}

void reverse(double *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        double swap = arr[i];
        arr[i] = arr[n - (i + 1)];
        arr[n - (i + 1)] = swap;
    }
}