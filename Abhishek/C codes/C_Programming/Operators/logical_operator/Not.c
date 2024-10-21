//Not(!) returns false when conditions are true and returns true when conditions are false
//

#include <stdio.h>
int main(){
    int a = 5;
    if(!(a == 5 && a<56 && a>4))
    {
        printf("The condition is working in operator");
    }
    else{
        printf("Its false because any one condition is false");
    }
    return 0;
}