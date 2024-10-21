// 1st And operator(&&) in this operator we combine multiple conditions which should be true if anyone is false the output will be false
// there's a short circuit in this operator where if any one condition is false the other remaining expression like increment wont be executed
// also if theres a expression instead of condition then if the value of expression is < 0 it'll be true 
#include <stdio.h>
int main(){
    int a = 5;
    if(a == 5 && a<56 && a>4)
    {
        printf("The condition is working in operator\n");
    }
    else{
        printf("Its false because  all condition is true\n");
    }

    int b = 3;
    int d = a<b && (b++);
    printf("%d\n", d);
    printf("%d", b);
    return 0;
}