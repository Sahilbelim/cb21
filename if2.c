#include<stdio.h>
void main()
{
    int number1, number2;
    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 ");
    scanf("%d", &number2);
    printf("Number 1 is %d and Number 2 is %d \n", number1, number2);

    if(number1>number2)
    {
        printf("Number 1 is larger \n");
    }
    printf("Good bye........");
}