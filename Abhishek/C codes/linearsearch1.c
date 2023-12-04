#include <stdio.h>
int main()
{
    int arr[]= {1,7,9,0,5,22,99};
    int target = 22;
    int len = 7;

    int i = 0;
    while(i <= len)
    {
        if(arr[i] == target)
        {
            printf("%d",i);
            break;
        }
        if (i == len)
        {
            printf("-1");
        }
        i++;
    }
}