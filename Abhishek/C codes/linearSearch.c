#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int target = 2;
    int arr[6];
    for (int i =0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i == target])
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("%d", -1);
}