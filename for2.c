#include <stdio.h>
void main()
{
    int j, i, temp;
    temp = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= temp; j++)
        {
            printf("* ");
        }
        printf("\n");
        temp++;
    }
}