// Write a programe to findout wether the user given alphabet is vowel or not
// a,e,i,o,u
#include<stdio.h>
void main()
{
     char letter ;

     printf("Enter any alphabet ");
     scanf("%c",&letter);

     if(letter == 'a' || letter=='e' || letter == 'o' || letter == 'i' || letter =='u' || letter == 'A' || letter == 'I' || letter == 'E' || letter == 'O' || letter == 'U')
     {
          printf("It is vowel ");
     }
     else
     {
          printf("It is consonent ");
     }
}