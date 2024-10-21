#include <stdio.h>
int main(){
    int i, t;
    for(i=1; i<=10; i++){
          if(i%2==0){ 
            t = t + i;
            printf("%d ",t);
           }
    }
    return 0;
}