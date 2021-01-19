/* static_variable.c */
#include <stdio.h>

/* sp can not access from other file,only can use in this file */
static int sp = 1;

static int doSomething();

int main(void) {
    printf("first call doSomething:%d\n",doSomething());
    printf("second call doSomething:%d\n",doSomething());
    printf("last call doSomething:%d\n",doSomething());
    return 0;
}

/* function doSomething can not access from other file */
static int doSomething(){
    /* i will always exist, whether doSomething is called or not */
    static int i;
    return i++;
}