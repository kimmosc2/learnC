#include <stdio.h>

#define MAX_LEN 10
void add_arr(int[], int[], int[], int);

int main(void)
{
    int arr1[MAX_LEN], arr2[MAX_LEN], arr3[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++)
    {
        arr1[i] = i << 1;
        arr2[i] = i + 1;
    }
    add_arr(arr1, arr2, arr3, MAX_LEN);
    for (int i = 0; i < MAX_LEN; i++)
        printf("%2d ", arr1[i]);
    printf("\n");
    for (int i = 0; i < MAX_LEN; i++)
        printf("%2d ", arr2[i]);
    printf("\n");
    for (int i = 0; i < MAX_LEN; i++)
        printf("%2d ", arr3[i]);
    printf("\n");
    return 0;
}

void add_arr(int source1[], int source2[], int target[], int lenth)
{
    for (int i = 0; i < lenth; i++)
        target[i] = source1[i] + source2[i];
}