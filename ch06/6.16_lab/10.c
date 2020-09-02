// input a two numbers
#include <stdio.h>

int main(void)
{
    _Bool pass = 0;
    int lower, upper;
    while (!pass)
    {

        printf("Enter lower and upper integer limits:");
        scanf("%d %d", &lower, &upper);
        if (upper <= lower)
        {
            printf("Done\n");
            return 0;
        }
        int sum = 0;
        for (int i = lower; i <= upper; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares form %d to %d is %d\n", lower*lower, upper*upper, sum);
    }

    return 0;
}