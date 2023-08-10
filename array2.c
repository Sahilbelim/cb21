#include<stdio.h>
void main()
{
    int r[5], i;
    float pi = 3.14159, area[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter radius of circle %d : ",i+1);
        scanf("%d", &r[i]);
    }
    printf("\n\n");
    for (i = 0; i < 5;i++)
    {
        printf("Value of circle %d radius : %d \n",i+1, r[i]);
    }
    printf("\n\n");
    for (i = 0; i < 5;i++)
    {
        area[i] = pi * (r[i] * r[i]);
        printf("Area of circle %d is : %.2f \n",i+1, area[i]);
    }

}