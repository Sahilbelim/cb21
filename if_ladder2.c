// Write a programe to findout bmi of user and also category
// ..bmi  = weight in kg / height in meter * height in meter
#include <stdio.h>
void main()
{
     float weight;
     int foot, inch;
     float foot_meter , inch_meter , total_meter , bmi;
     printf("Enter value of weight ");
     scanf("%f",&weight);

     printf("Enter value of foot ");
     scanf("%d",&foot);

     printf("Enter value of inch ");
     scanf("%d",&inch);

     foot_meter = foot / 3.281;
     printf("\nThe value of foot meter is %f ",foot_meter);

     inch_meter = inch / 39.37;
     printf("\nThe value of inch meter is %f ",inch_meter);

     total_meter = foot_meter + inch_meter;

     bmi = weight / (total_meter * total_meter);
     printf("\nThe value of bmi is %f \n",bmi );

     if(bmi < 18.5)
     {
          printf("You are underweight ");
     }
     else if(bmi >= 18.5 && bmi < 25)
     {
          printf("You are normal weight ");
     }
     else if(bmi>=25 && bmi <30)
     {
          printf("You are over weight ");
     }
     else if(bmi >= 30 )
     {
          printf("You are extremly overweight ");
     }
}