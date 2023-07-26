#include<stdio.h>
void main()
{
    int number,first_num,last_num;
    printf("Enter any two digit number ");
    scanf("%d", &number);//45
    printf("Number is %d ", number);
    first_num = number / 10; // 4.5
    last_num = number % 10;  // 5

    printf("First number %d and last number %d ", first_num, last_num);
    
}