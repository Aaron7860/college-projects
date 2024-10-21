#include <stdio.h>
int main (){
    int a;
    printf("Enter Your number:");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("The Number %d is even", a);
    }
    else{
        printf("The Number %d is Odd", a);
    }
    return 0;
}