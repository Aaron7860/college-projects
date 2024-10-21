#include <stdio.h>
int main(){
    int i , t;
    t = 1;
    for(i = 1; i <= 6;i++){
      printf("%d ",t-1);
      t = t +(i * i);
    }
    return 0;
}