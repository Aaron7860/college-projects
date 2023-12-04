#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);

    int i = 0, j = n-1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }
     for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    while (i != j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("\nAfter reverse\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}