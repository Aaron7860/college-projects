#include <stdio.h>
int main (){
   int l;
   printf("Enter The Length of ractangle: ");
   scanf("%d", &l);
   int b;
   printf("Enter The Breadth of rectangle: ");
   scanf("%d", &b);
   int a = l * b;
   int p = 2*(l+b);
   if(a<p){
    printf("Perimeter is Greater Than Area");
   }
   else if(p<a){
    printf("Area is Greatern Than Perimeter");
   }
   else{
    printf("Both are Equal");
   }
   
    return 0;
}