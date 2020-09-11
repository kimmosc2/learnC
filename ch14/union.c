/* union.c 联合变量*/
#include <stdio.h>
union something
{
    int age;
    char *name;
    // ...
};

union something a;
union something b;

int main(void)
{
    a.age = 5;
    b.name = "b";
    // a.name = "a";
    printf("%d\n",a.age);
    printf("%d\n",b.name);
    // 只能同时存储一个,再次存储,前一个会被覆盖
    return 0;
}