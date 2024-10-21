#include <stdio.h>
int main()
{
    int a;
    printf("Enter the percentage:");
    scanf("%d", &a);
    if (a > 80)
    {
        printf("A Grade\n");
    }
    else if (a > 60)
    {
        printf("B Grade\n");
    }
    else if (a > 40)
    {
        printf("C Grade\n");
    }
    else
    {
        printf("D Grade\n");
    }
    return 0;
}