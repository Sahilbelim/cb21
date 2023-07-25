#include<stdio.h>
void main()
{
    float r, h, v,pi;
    pi = 3.14159;
    printf("Enter value of radius ");
    scanf("%f", &r);
    printf("Enter value of height ");
    scanf("%f", &h);

    printf("Value of radius is %.2f and value of height is %.2f \n", r, h);

    v = pi * h * (r * r);
    printf(" voluem of cylinder is %.2f ", v);
}