#include<stdio.h>
void main()
{
    int number[5],i;

    // number[0] = 10;
    // number[1] = 10;
    // number[2] = 10;
    // number[3] = 10;
    // number[4] = 10;

    // printf("Enter number : ");
    // scanf("%d",&number[0]);
    // printf("Enter number : ");
    // scanf("%d",&number[1]);
    // printf("Enter number : ");
    // scanf("%d",&number[2]);
    // printf("Enter number : ");
    // scanf("%d",&number[3]);
    // printf("Enter number : ");
    // scanf("%d",&number[4]);

    for (i = 0; i < 5;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&number[i]);
    }

    // printf("Value of number 1 is %d \n", number[0]);
    // printf("Value of number 2 is %d \n", number[1]);
    // printf("Value of number 3 is %d \n", number[2]);
    // printf("Value of number 4 is %d \n", number[3]);
    // printf("Value of number 5 is %d \n", number[4]);
    for (i = 0; i < 5;i++)
    {
        printf("Value of number %d is %d \n",i+1, number[i]);
    }

}