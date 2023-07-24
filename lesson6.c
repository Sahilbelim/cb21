#include<stdio.h>
void main()
{
    int num1, num2,add,sub,mul,mod;
    float div;
    printf("Enter value of number 1 ");
    scanf("%d", &num1);
    printf("Enter value of number 2 ");
    scanf("%d", &num2);

    printf("Value of number 1 is %d and 2 is %d \n", num1, num2);

    add = num1 + num2;
    printf("Addition is %d \n", add);
    sub = num1 - num2;
    printf("Subtraction is %d \n", sub);
    mul = num1 * num2;
    printf("Multiplication is %d \n", mul);
    div = num1 / num2;
    printf("Division is %.2f \n", div);
    mod = num1 % num2;
    printf("Modules is %d ", mod);
}