#include <stdio.h>
int main(){
    int a, b, c, t;
    printf("Enter the numbers:");
    scanf("%d %d %d", &a, &b, &c);
    
    t = a==b;
    printf("%d\n",t);

    t = a==c;
    printf("%d\n",t);

    t = b != a;
    printf("%d\n",t);

    t = a!=c;
    printf("%d\n",t);

return 0;
}