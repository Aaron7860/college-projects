#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    int q = a/b;
    int r = a -(b*q);
    printf("Your remainder is: %d", r);
    return 0;
}