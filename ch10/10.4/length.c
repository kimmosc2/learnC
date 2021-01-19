/* length.c -- case of array lenth */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10
#define ElementType char
#define ElementFormat "%c, "
void printArray(ElementType *, int);
void autoPrint(ElementType *);

int main(void)
{
    ElementType elarr[MAX_LENGTH];
    for (int i = 0; i < MAX_LENGTH/2; i++)
        *(elarr + i) = 'a';
    
    autoPrint(elarr);
    printArray(elarr,MAX_LENGTH);
    return 0;
}

// printArray print every element of ElementType array
void printArray(ElementType *el, int size)
{
    int i;
    printf("printArray:[");
    for (i = 0; i < size; i++)
        printf(ElementFormat, *(el + i));
    printf("]\n");
}

void autoPrint(ElementType *el){
    int i;
    printf("autoPrint[");
    for(i = 0;i<strlen(el);i++)
        printf(ElementFormat,*(el+i));
        printf("]\n");
}