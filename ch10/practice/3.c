#include <stdio.h>

#define MAX_LEN 100
int max_of_array(int *, int);

int main(void)
{
    int arr[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++)
        arr[i] = i;
    printf("%d\n", max_of_array(arr, MAX_LEN));
    return 0;
}

int max_of_array(int *arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
        if(arr[i]>max)
            max = arr[i];
    return max;
}
