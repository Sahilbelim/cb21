#include<stdio.h>
void main()
{
    int age;
    printf("Enter Value of Age ");
    scanf("%d", &age);

    printf("Age : %d \n", age);
    if(age>18)
    {
        printf("you can voting \n");
    }
    printf("Good by...\n");
}