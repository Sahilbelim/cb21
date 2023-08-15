#include<stdio.h>
void printsymbol(int num ,char sy)
{
    int i;
    for (i = 1; i <= num; i++)
    {
        printf("%c", sy);
    }
    printf("\n");

}
void main()
{
    int number;
    char symbol;
    printf("Enter symbol ");
    scanf("%c", &symbol);

    printf("Enter number of symbol : ");
    scanf("%d", &number);

    printsymbol(number,symbol);

    printf("name : sahil belim \n");

    printsymbol(number, symbol);

    printf("Age : 19\n");

    printsymbol(number, symbol);

    printf("weight : 45.36 \n");

    printsymbol(number, symbol);

    printf("Number : 9924254332 \n");

    printsymbol(number, symbol);

    printf("Email : sahil@gmail.com \n");

    printsymbol(number, symbol);
}