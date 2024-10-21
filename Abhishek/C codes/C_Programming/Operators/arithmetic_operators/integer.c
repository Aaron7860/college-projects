// integer data type
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;

    printf("Sum:%d \nSub:%d \nMul:%d \nDiv:%d", sum, sub, mul, div);

    return 0;
}
