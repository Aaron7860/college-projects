#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n%5==0 || n%3==0){
        printf("The number is valid");
    }
    else{
        printf("The number is invalid");
    }
    
    return 0;
}