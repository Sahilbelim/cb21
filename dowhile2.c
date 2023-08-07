// Write a programe to create a calc which menu driven
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulus
// ->max
// ->min
// ->equality
// ->exit
#include <stdio.h>
void main()
{
     int number1, number2;
     int option = 0;
     int answer;

     do
     {
          printf("\nEnter value of number 1 ");
          scanf("%d", &number1);
          printf("Enter value of number 2 ");
          scanf("%d", &number2);

          printf("Enter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for multiplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 5 for modulus ");
          printf("\nEnter 6 for max ");
          printf("\nEnter 7 for min ");
          printf("\nEnter 8 for equality ");
          printf("\nEnter 9 for exit ");
          printf("\nSelect any one option from above ");
          scanf("%d", &option);

          if (option == 1)
          {
               answer = number1 + number2;
               printf("The value of answer is %d ", answer);
          }
          else if (option == 2)
          {
               answer = number1 - number2;
               printf("The value of answer is %d ", answer);
          }
          else if (option == 3)
          {
               answer = number1 * number2;
               printf("The value of answer is %d ", answer);
          }
          else if (option == 4)
          {
               answer = number1 / number2;
               printf("The value of answer is %d ", answer);
          }
          else if (option == 5)
          {
               answer = number1 % number2;
               printf("The value of answer is %d ", answer);
          }
          else if (option == 6)
          {
               if (number1 > number2)
               {
                    printf("Number 1 is greater ");
               }
               else if (number2 > number1)
               {
                    printf("Number 2 is greater ");
               }
          }
          else if (option == 7)
          {
               if (number1 < number2)
               {
                    printf("Number 1 is smaller ");
               }
               else if (number2 < number1)
               {
                    printf("Number 2 is smaller ");
               }
          }
          else if (option == 8)
          {
               if (number1 == number2)
               {
                    printf("Both are same ");
               }
               else
               {
                    printf("Both are not same ");
               }
          }
          else if (option == 9)
          {
               printf("Goodbyee...");
          }

     }while(option != 9);
}