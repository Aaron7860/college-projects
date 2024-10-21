#include <stdio.h>

int main()
{
    int a, b;

    a = 2;
    b  = --a;
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    a = 2;
    b = a--;
    printf("a:%d\n", a);
    printf("b:%d", b);

    return 0;
}