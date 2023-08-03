// write a programe to print following pattern 
// 1]1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000

#include<stdio.h>
void main()
{
    int number,temp;
    number = 1;
    temp = 1;

  
    while(number<=10000)
    {
        printf("%d,", number);
        temp = temp + 4;        // 5
        number = number + temp; // 6
    }
    
}