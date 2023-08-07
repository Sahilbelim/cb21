// Write a programe to find factorial of given number
// 5 = 5*4*3*2*1 = 120
// 7 = 7*6*5*4*3*2*1 = 5040
#include <stdio.h>
void main()
{
     int number = 0;
     long long int answer = 0;
     int count = 2;
     printf("Enter value of number ");
     scanf("%d", &number);

     if (number < 0)
     {
          printf("It is negative number it has no factorial ");
     }
     else if (number == 0)
     {
          printf("It has no factorial ");
     }
     else if (number == 1)
     {
          printf("The value of answer is 1 ");
     }
     else if (number == 2)
     {
          printf("the value of answer is 2 ");
     }
     else
     {
          answer = number * (number - 1); // 5 * 4 = 20
          do
          {
               answer = answer * (number - count); // 20 * 3 = 60
               count++;
          } while (count < number);
          printf("The value of answer is %lld ", answer);
     }

     // number = 5;
     // count++;
     // answer = answer * (number - count); // 60 * 2 = 120
     // count++
     // answer = answer * (number - count); // 120 * 1 = 120
     // answer = answer * (number - 5); // 120 * 1 = 120
     // answer = answer * (number - 6); // 120 * 1 = 120
}