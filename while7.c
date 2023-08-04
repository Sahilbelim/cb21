// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 322.
#include<stdio.h>
void main()
{
    int num1,num2;
    num1 = 2;
    num2 =1;
    printf("%d ,", num1);

    
        while(num1<322)
        {
            printf("%d ,", num2);
            num1 = num2 + num1; // 3
            printf("%d ,", num1);
            num2 = num2 + num1; // 4
        }
}