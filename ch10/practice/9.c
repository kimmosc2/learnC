#include <stdio.h>

#define MAX_A 10
#define MAX_B 5
void copy_arr(int m, int n, double source[*][*], double taget[*][*]);
void print_arr(int m, int n, double arr[*][*]);

int main(void)
{
    double source[MAX_A][MAX_B], target[MAX_A][MAX_B];
    for (int i = 0; i < MAX_A; i++)
        for (int j = 0; j < MAX_B; j++)
            source[i][j] = (i + j + 1) * 1.1;
    copy_arr(MAX_A, MAX_B, source, target);
    print_arr(MAX_A, MAX_B, source);
    return 0;
}

void copy_arr(int m, int n, double source[m][n], double target[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            target[i][j] = source[i][j];
}

void print_arr(int m, int n, double arr[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        printf("%2d: [ ", i + 1);
        for (j = 0; j < n; j++)
        {
            printf("%4.1f", arr[i][j]);
            if (j < (n - 1))
                printf(", ");
        }
        printf(" ]\n");
    }
}