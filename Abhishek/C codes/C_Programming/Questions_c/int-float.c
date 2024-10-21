// take float as input and print half of the number or print fractional part (ex:2.34 = 0.34)
#include <stdio.h>

int main(){
  float x ;
  printf("Enter the Decimal No:");
  scanf("%f", &x);
  int y = x;
  float z = x - y;
  printf("Your Fractional value is:%f", z);
}