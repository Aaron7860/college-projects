#include <stdio.h>
int main()
{
    float m, p, e, c, d;
    printf("Enter your Maths Mark82s:");
    scanf("%f",&m);
    printf("Enter your Physics Marks:");
    scanf("%f",&p);
    printf("Enter your English Marks:");
    scanf("%f",&e);
    printf("Enter your Chemistry Marks:");
    scanf("%f",&c);
    printf("Enter your Drawing Marks:");
    scanf("%f",&d);
    
    float percentage = (m + p + e + c + d )/5;
    printf("You have obtained %f", percentage);

    return 0;
}