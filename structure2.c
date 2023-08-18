#include<stdio.h>
struct student
{
    int age;
    char name[24];
    float weight;
}s1,s2,s[5];
void main()
{
    int i;

    for (i = 0; i < 5;i++)
    {
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Age : ");
        scanf("%d", &s[i].age);
        printf("Enter weight : ");
        scanf("%f", &s[i].weight);
   }

   for (i = 0; i < 5; i++)
   {
        printf("\n\n _____________________________\n\n");
        printf("Name   : %s\n\n", s[i].name);
        printf("Age    : %d\n\n", s[i].age);
        printf("Weight : %.2f\n\n", s[i].weight);
    }
    printf("All done :");
}