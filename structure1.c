#include<stdio.h>
struct student
{
    int age;
    char name[24];
    float weight;
};
void main()
{
    struct student s1, s2, s3, s4, s5;
    printf("Enter Name : ");
    scanf("%s", &s1.name);
    printf("Enter Age : ");
    scanf("%d", &s1.age);
    printf("Enter weight : ");
    scanf("%f", &s1.weight);
    printf("Enter Name : ");
    scanf("%s", &s2.name);
    printf("Enter Age : ");
    scanf("%d", &s2.age);
    printf("Enter weight : ");
    scanf("%f", &s2.weight);

    printf("\n\n _____________________________\n\n");
    printf("Name   : %s\n\n", s1.name);
    printf("Age    : %d\n\n", s1.age);
    printf("Weight : %.2f\n\n", s1.weight);
    printf("\n\n _____________________________\n\n");
    printf("Name   : %s\n\n", s2.name);
    printf("Age    : %d\n\n", s2.age);
    printf("Weight : %.2f\n\n", s2.weight);
}