#include<stdio.h>
int Add(int num1,int num2)
{
    int add;
    add = num1 + num2;
    return add;
}
int Sub(int number1,int number2)
{
    int sub;
    sub = number1 - number2;
    return sub;
    // return (number1 - number2);
}

void main()
{
    int number1, number2,add,sub;

    printf("Enter number 1 : ");
    
    scanf("%d", &number1);
    
    printf("Enter number 2 : ");
    
    scanf("%d", &number2);

    
    add = Add(number1,number2);
    
    printf("Addition is %d \n",add);
    sub = Sub(number1, number2);
    printf("Subtraction is %d ", sub);
}