#include <stdio.h>
int main(){
    int i, num;
    printf("Enter the number:");
    scanf("%d", &num);
    for(i = 1; i<= num/2; i++){
        if(num%i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}