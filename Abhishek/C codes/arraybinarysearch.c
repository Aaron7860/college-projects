#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,45,8,6,7,12};
    int target = 45;

    int start = 0;
    int end = 7;
    
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(arr[mid] == target)
        {
            printf("%d",mid);
            break;
        }
        else if(target < arr[mid])
        {
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        if(end < start)
        {
            printf("-1");
        }
    }
}