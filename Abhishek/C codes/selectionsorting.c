#include <stdio.h>
int main()
{
     int size;
    scanf("%d",&size);
    int arr[size];
      for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i = 0; i < size - 1; i++)
     {
        int min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
     }
     for(int i = 0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
}