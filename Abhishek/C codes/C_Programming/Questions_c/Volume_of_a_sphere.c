#include <stdio.h>

int main()
{
    int r;
    printf("Enter the value of radius:");
    scanf("%d",&r);

    float v = 4 * 3.1415 * r * r * r / 3;
    printf("Volume of Sphere is:%f",v);

    return 0;
}