#include<stdio.h>
float Pi()
{
    // float pi = 3.14159;
    // return pi;

    return 3.14159;

}
void main()
{
    float area, r, pi;

    pi = Pi();
    printf("Enter Value of radius ");
    scanf("%f",&r);

    area = pi * (r * r);
    printf("Area of Circle is %.4f \n ", area);


}