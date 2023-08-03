#include <stdio.h>
void main()
{

    int s_num, e_num;

    printf("Enter starting number ");
    scanf("%d", &s_num);
    printf("Enter ending number ");
    scanf("%d", &e_num);
    
    while(s_num<=e_num)
    {
        printf("%d\n", s_num);
        s_num = s_num + 1;
    }

}