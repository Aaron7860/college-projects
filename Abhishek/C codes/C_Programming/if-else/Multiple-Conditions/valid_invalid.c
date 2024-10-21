#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n>0 && n%15==0){
        printf("The number is valid");
    }
    else{
        printf("The number is invalid");
    }
    
    return 0;
}