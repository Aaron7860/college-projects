#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t1 = 0, t2 = 1,t3;
    printf("%d %d",t1, t2);
    for(int i = 3; i<= n; i++)
    {
       t3 = t1 + t2;
       t1 = t2;
       t2 = t3;
       printf("%d", t3);
    }
}