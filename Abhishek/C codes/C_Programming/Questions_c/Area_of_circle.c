#include <stdio.h>
int main()
{
    int r;
    printf("Enter The Radius:");
    scanf("%d", &r);
    float a = 3.1415 * r * r;
    printf("Area of The Circle is:%f",a);

    return 0;
}