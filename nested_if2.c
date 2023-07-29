// Write a programe to findout zodiac sign of user based on given birth month and day
#include <stdio.h>
void main()
{
     int month, day;

     printf("Enter value of month ");
     scanf("%d", &month);

     printf("Enter value of day ");
     scanf("%d", &day);

     if ( (month == 3 && day <= 31 && day >= 21) || (month == 4 && day>=1 && day<=19) )
     {
          printf("It is aries ");
     }
   
}
