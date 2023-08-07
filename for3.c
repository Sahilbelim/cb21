#include <stdio.h>
void main()
{
    int row, col1, col2, temp, flash;
    temp = 1;
    flash = 5;

    for (row = 1; row <= 5; row++)
    {

        for (col1 = 1; col1 <= temp; col1++)
        {
            printf(" ");
        }
        for (col2 = 1; col2 <= flash; col2++)
        {
            printf("* ");
        }
        printf("\n");
        temp++;
        flash--;
    }
}

// _*

// _____*****

// _____*****
// _____*****
// _____*****
// _____*****
// _____*****

// _* * * * *
// __* * * *
// ___* * *
// ____* *
// _____*
