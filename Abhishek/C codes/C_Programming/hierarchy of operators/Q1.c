#include <stdio.h>

int main(){
   int i = 2 , j = 3, k, l; 
   float a, b;
   k = i/j*i;
   l = j/i*i;
   a = i/j*i;
   b = j/i*i;
   printf(" %d\n %d\n %f\n %f", k, l ,a, b);
   return 0;
}
