#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int row= 1; row <= n; row++)
    {
        for(int spaces = 2; spaces<= row; spaces++)
        {
            printf(" ");
        }
        for (int col = n; col >= row; col--)
        {
            printf("*");
        }
        printf("\n");
    }
}