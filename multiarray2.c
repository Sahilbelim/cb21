#include<stdio.h>
void main()
{
    int marks[5][5],i,j,add[5];
    float avg[5];

    for (j = 0; j < 5;j++)
    {
        printf("Enter marks of student %d \n",j+1);
        for (i = 0; i < 5; i++)
        {
            printf("Enter marks of subject %d : ", i + 1);
            scanf("%d", &marks[j][i]);
        }
    }
    for (j = 0; j < 5;j++)
    {
        printf("\n\n ----------------------------------------\n\n");
        printf("Student %d marks : \n\n",j+1);
        for (i = 0; i < 5; i++)
        {
            printf("marks of subject %d  : %d \n\n", i + 1, marks[j][i]);
        }
        add[j] = marks[j][0] + marks[j][1] + marks[j][2] + marks[j][3] + marks[j][4] ;
        // printf("add : %d", add[j]);
        avg[j] = add[j] / 5;
      
    }
    for (i = 0; i < 5;i++)
    {

        printf("avareg of student %d is :  %.2f \n",i+1, avg[i]);
    }
  
}