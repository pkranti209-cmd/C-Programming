//Q2.Employee (id, name, salary)
#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void main()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d",&e.id);

    printf("Enter Name: ");
    scanf("%s",e.name);

    printf("Enter Salary: ");
    scanf("%f",&e.salary);

    printf("\nEmployee Details\n");
    printf("ID = %d\n",e.id);
    printf("Name = %s\n",e.name);
    printf("Salary = %.2f\n",e.salary);
}