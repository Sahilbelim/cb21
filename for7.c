// 1
// 23
// 456
// 78910


#include<stdio.h>
void main()
{
    int i, j,k;

    k = 1;

    for (i = 1; i <= 4;i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");

    }
}