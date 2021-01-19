#include <stdio.h>

#define FIRST_SIZE 3
#define SECOND_SIZE 5
void copy_ptr(double *, double *, int);

int main(void)
{
    double arr[FIRST_SIZE][SECOND_SIZE];
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (int i = 0; i < FIRST_SIZE; i++)
        copy_ptr(arr[i], source, SECOND_SIZE);
    for (int i = 0; i < FIRST_SIZE; i++)
    {
        for (int j = 0; j < SECOND_SIZE; j++)
            printf("%f, ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

void copy_ptr(double *target2, double *source, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(target2 + i) = *(source + i);
    return;
}
