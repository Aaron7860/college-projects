// or(||) returns true when one or more than on condition is true and returns false when all the conditions are false
// if theres one conditions is true then after that other condition or expression won't be evaluated
#include <stdio.h>
int main(){
    int a = 5;
    if(a == 6 || a>56 || a>4)
    {
        printf("The condition is working in operator\n");
    }
    else{
        printf("Its false because any one condition is false\n");
    }

    int b = 3;
    int d = a>b || (b++);
    printf("%d\n", d);
    printf("%d", b);
    return 0;
}