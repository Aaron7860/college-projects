#include <stdio.h>
int main(){
    int i = 1;
    i = ++i; //here its pre-increment so we add 1 in the value of i then we use that means i = 2
    i = i++; //here we first input the value because its post-increment so here i = 2, but in next instruction i=3 but it will be added as 3 when there is also a instruction running
    printf("%d", i);
    // same goes for decrement
    return 0;
}
