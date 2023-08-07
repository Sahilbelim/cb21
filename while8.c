// 4] 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
#include <stdio.h>
void main()
{
    int num, num2;
    num = 1;
    num2 = 1;

    while (num < 3000)
    {
        printf("%d ,", num);
        num2 = num2 + 3;
        num = num + num2;
    }
}
// printf("%d ,", num);
// num = num + num2;
// num2 = num2 + 3;//4
// printf("%d ,", num);
// num2 = num2 + 3; // 7
// num = num + num2;
// printf("%d ,", num);
// num2 = num + 3;
// num = num + num2;//10

// printf("%d ,", num);
// num2 = num2 + 3;//13
// num = num + num2;

// printf("%d ,", num);
// num2 = num2 + 3;//16
// num = num + num2;

// printf("%d ,", num);
