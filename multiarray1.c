#include<stdio.h>
void main()
{

    int number[3][3],i,j,add;
    float avg;

    // number[0][0] = 10;
    // number[0][1] = 10;
    // number[0][2] = 10;
    // number[1][0] = 20;
    // number[1][1] = 20;
    // number[1][2] = 20;
    // number[2][0] = 20;
    // number[2][1] = 20;
    // number[2][2] = 20;

    // printf("Enter number : ");
    // scanf("%d", &number[0][0]);
    // printf("Enter number : ");
    // scanf("%d", number[0][1]);
    // printf("Enter number : ");
    // scanf("%d", &number[0][2]);
    // printf("Enter number ");
    // scanf("%d", &number[1][0]);
    // printf("Enter number ");
    // scanf("%d", &number[1][1]);
    // printf("Enter number ");
    // scanf("%d", &number[1][2]);
    // printf("Enter number ");
    // scanf("%d", &number[2][0]);
    // printf("Enter number ");
    // scanf("%d", &number[2][1]);
    // printf("Enter number ");
    // scanf("%d", number[2][2]);

    for (i = 0; i < 3;i++)
    {

        for (j = 0; j < 3;j++)
        {
            printf("Enter number  : ");
            scanf("%d", &number[i][j]);
       }
    }
    add = number[0][0] + number[0][1] + number[0][2] + number[1][0] + number[1][1] + number[1][2] + number[2][0] + number[2][1] + number[2][2];
    printf("Addition is %d \n", add);
    avg = add / 9;
    printf("AVG is %.2f \n", avg);
    
}