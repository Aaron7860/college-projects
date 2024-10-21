#include <stdio.h>
int main()
{
    int i, num, f = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        f = f * i;
    }
    printf("Factorial is %d", f);
    return 0;
}
