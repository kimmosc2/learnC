// 8.c -- input two numbers of float type,
// print (the difference between two numbers) / (product of two numbers)
#include <stdio.h>

int main(void)
{
    float a, b;
    do
    {
        // TODO: wrong way!
        printf("please input two numbers of float type(use white space to split):");
    } while (!scanf("%f %f", &a, &b));
    
    
    printf("value:(a - b) / (a x b) = %d\n", (a-b)/(a+b));
    return 0;
}