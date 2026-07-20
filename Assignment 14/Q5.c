//Q5.SalesManager (id, name, salary, incentive, target)
#include<stdio.h>

struct SalesManager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	float target;
 }; 
 
 void main()
 {
 	
 	struct  SalesManager m;
	 

	printf("Enter ID: ");
    scanf("%d",&m.id);

    printf("Enter Name: ");
    scanf("%s",m.name);

    printf("Enter Salary: ");
    scanf("%f",&m.salary);
    
    printf("Enter incentive: ");
    scanf("%f",&m.incentive);
    
    printf("Enter target: ");
    scanf("%f",&m.target);
    
    printf("\nsalesManager Details\n");
    printf("ID = %d\n",m.id);
    printf("Name = %s\n",m.name);
    printf("Salary = %f\n",m.salary);
    printf("incentive=%f\n",m.incentive);
    printf("target=%f\n",m.target);
 }