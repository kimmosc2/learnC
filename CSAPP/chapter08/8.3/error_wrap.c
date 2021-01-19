#include <stdio.h>

void unix_error(char *msg)
{
    fprintf(stderr,"%s\n",msg);
    exit(0);    
}