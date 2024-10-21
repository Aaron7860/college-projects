#include <stdio.h>
int main(){
    int a;
    printf("Enter the positive No: ");
    scanf("%d", &a);

    if(a % 7 == 0){
        printf("The number is Buzz no");
    }
    else{
        printf("The number is not Buzz no");
    }

    return 0;
}