// ascii value is the value when we use integer specifier for character variables
#include <stdio.h>
int main(){
    char a = 'A';
    printf("%d\n", a);  //the value will be 65 and when alphabtes goes it icreases by 1
    char x = 'a';
    printf("%d", x); //the value will be 97 and when alphabtes goes it icreases by 1
    return 0;
}