#include <stdio.h>
int main()
{
   int n, i = 1;
   int sum = 0;
   int num;
   scanf("%d",&n);
   while (i<=n)
   {
    scanf("%d",&num);
    sum = sum + num;
    i = i + 1;
   }
     float avg= sum / n;
      printf("%f",avg);
}