#include <stdio.h>

#define FIRST 3
#define SECOND 5

void print_arr(int, int, int[*][*]);
void double_arr(int, int, int[*][*]);

int main(void)
{
    int arr[FIRST][SECOND] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {2, 2, 2, 2, 2}};
    double_arr(FIRST, SECOND, arr);
    print_arr(FIRST, SECOND, arr);
    return 0;
}

void print_arr(int m, int n, int arr[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
}

void double_arr(int m, int n, int arr[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] <<= 1;
}