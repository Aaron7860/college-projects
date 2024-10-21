// float is used to show decimals and real numbers in programming
#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);

    float sum = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = a / b;

    printf("Sum:%f \nSub:%f \nMul:%f \nDiv:%f", sum, sub, mul, div);

    return 0;
}
