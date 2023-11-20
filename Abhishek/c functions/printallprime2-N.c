#include <stdio.h>
void checkPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        printf("%d ", n);
}
void primeloop(int n)
{
    for (int i = 2; i <= n; i++)
    {
        checkPrime(i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    primeloop(n);
}