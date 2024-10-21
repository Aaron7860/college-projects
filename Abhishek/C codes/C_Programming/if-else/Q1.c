#include <stdio.h>
int main (){
   int cp;
   printf("Enter The Cost Price Of product: ");
   scanf("%d", &cp);
   int sp;
   printf("Enter The Selling Price Of product: ");
   scanf("%d", &sp);
   if(cp<sp){
    printf("Profit");
   }
   else if(sp<cp){
    printf("Loss");
   }
   else{
    printf("No Profit, No loss");
   }
   
    return 0;
}