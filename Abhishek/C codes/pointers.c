#include <stdio.h>
int main()
{
  int num=10;
  int *numptr = &num;
  printf("%p\n",numptr);
  char ch = 'a';
  char chPtr = &ch;
  printf("%p\n",chPtr);
  printf("%d\n",*numptr);

  int **numPtr2 = &numptr;
   printf("%p\n",numPtr2);
   printf("%d",**numPtr2);
}
