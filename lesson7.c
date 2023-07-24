// Write a print to find area of cube get height and base from user using scanf.
#include<stdio.h>
void main()
{
    int lenth, area;

    printf("Enter value of lenth ");
    scanf("%d", &lenth);
    area = 6 * (lenth * lenth);
    printf("Area of cube is %d ", area);
    
}