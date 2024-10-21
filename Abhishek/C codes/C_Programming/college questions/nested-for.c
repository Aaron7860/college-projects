#include <stdio.h>
int main(){
    int i, t;
    for(i=10; i>=5; i--){
            if(i%2 != 0){
                t = i*i;
                printf("%d ", t);
            }
            else{
                printf("%d ", i);
            }
    }
    return 0;
}