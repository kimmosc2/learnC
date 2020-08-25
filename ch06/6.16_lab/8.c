// 8.c -- input two numbers of float type,
// print (the difference between two numbers) / (product of two numbers)
#include <stdio.h>

int main(void)
{
    float a, b;
    do
    {
        printf("please input two numbers of float type(use white space to split):");
    } while (!scanf("%f %f", &a, &b));
    
    
    printf("a:%f b:%f\n", a, b);
    return 0;
}