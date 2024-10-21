#include <stdio.h>
int main(){
    // if there is any variable or value mentioned in if statement then its true but if we mention 0 it wont work
    int a;
    if(5){
        printf("Hello guys\n");
    }
    if(3+2%5){
        printf("Hii\n");
    }
    if('a'){
        printf("Hello\n");
    }
    if(a = 10){
        printf("Hello");
    }
    return 0;
}