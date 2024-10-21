#include <stdio.h>
int main(){
    int i, t;
    t = 1;
    for(i = 1; i <= 6; i++){
       printf("%d ",t);
        t = t * i;
    }
    return 0;
}