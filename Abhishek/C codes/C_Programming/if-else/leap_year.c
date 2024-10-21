#include <stdio.h>
int main(){
    int y;
    printf("Enter The Year: ");
    scanf("%d", &y);

    if(y % 4 ==0){
        printf("Year is Leap Year");
    }
    else if(y % 100){
        printf("Not a Leap Year");
    }
    else if(y % 400){
        printf("Year is Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    
    return 0;
}