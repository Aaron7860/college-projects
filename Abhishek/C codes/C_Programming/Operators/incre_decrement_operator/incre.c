#include <stdio.h>

int main(){
    int a, b;
    a = 1;
    b = ++a;
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    a = 1;
    b = a++;
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    return 0;
}