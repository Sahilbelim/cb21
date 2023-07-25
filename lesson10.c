#include<stdio.h>
void main()
{
    int foot_height, inch_height;
    float weight, height,bmi,f_to_m,i_to_m;

    printf("Enter value of weight ");
    scanf("%f", &weight);
    printf("Enter value of in foot  height ");
    scanf("%d", &foot_height); 
    printf("Enter value of in inch  height ");
    scanf("%d", &inch_height);

    f_to_m = (foot_height * 0.3048);
 
    i_to_m = (inch_height / 39.37);
    height = f_to_m + i_to_m;
    // height = ((foot_height * 0.3048) + (inch_height / 39.37));

    printf("Weight is %.2f and heigth is %.2f \n", weight, height);

    bmi = weight / (height * height);
    printf("BMI is %.2f ", bmi);
}