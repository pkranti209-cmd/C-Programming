//Q1. Student (rollNo, name, marks)
#include<stdio.h>


struct Student
{
    int rollNo;
    char name[20];
    float marks;
};

void main()
{
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d",&s.rollNo);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    printf("\nStudent Details\n");
    printf("Roll No = %d\n",s.rollNo);
    printf("Name = %s\n",s.name);
    printf("Marks = %.2f\n",s.marks);
}
