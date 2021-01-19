#include <stdio.h>
#define MAX_SIZE 100
double difference(double *, int);

int main(void)
{
    double arr[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
        arr[i] = (i + 1) * 2.2;
    printf("%f\n", difference(arr, MAX_SIZE));
    return 0;
}

double difference(double *arr, int n)
{
    double min, max;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    // printf("max:%f,min:%f\n", max, min);
    return max - min;
}