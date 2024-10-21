#include <stdio.h>
int main(){
    int i, num, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);

    for(i = 1; i <= num/2; i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    if(sum == num){
        printf("Perfect number");
    }
    else{
        printf("Not Perfect number");
    }
    return 0;
}