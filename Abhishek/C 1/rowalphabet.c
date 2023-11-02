#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int row= 1; row <= n; row++)
    {
        char ch = 'A';
        for(int col= 1; col <= row; col++)
        {
            printf("%C",ch);
            ch++;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}