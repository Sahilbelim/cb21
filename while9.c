// 5] 1, 8, 27, 64 ,125 ... 1000.

#include<stdio.h>
void main()
{
    int num,qb;
    num = 0;

   
    while(qb<1000)
    {
        num = num + 1;
        qb = num * num * num;
        printf("%d, ", qb);
    }
    printf("\nGood bye ...........");
}