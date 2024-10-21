#include <stdio.h>
int main(){
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);

    if(n>99 && n<1000){
        printf("The number is three digit number");
    }
    else{
        printf("The number is not three digit number");
    }

    return 0;
}