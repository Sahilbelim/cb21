#include<stdio.h>
void main()
{
    int i, j;
    i = 5;
    do
    {
        j = 1;
        do
        {

            printf("%d ",j);
            j++;
        } while (j <= i);

        printf("\n");
        i--;
    } while (i>=1);
}