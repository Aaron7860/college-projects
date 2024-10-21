#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of Ram:");
    scanf("%d", &a);
    printf("Enter the age of Shyam:");
    scanf("%d", &b);
    printf("Enter the age of Lakhan:");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("Ram is the Youngest");
    }
    else if (b < c && b < a)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Lakhan is the Youngest");
    }

    return 0;
}