//Q4. HR (id, name, salary, commission)

#include<stdio.h>

struct hr

{
	int id;
	char name[20];
	float salary;
	float commission;
};

void main()
{
	
	struct hr h;
	printf("Enter ID: ");
    scanf("%d",&h.id);

    printf("Enter Name: ");
    scanf("%s",h.name);

    printf("Enter Salary: ");
    scanf("%f",&h.salary);
    
    printf("Enter commission: ");
    scanf("%f",&h.commission);
    
    printf("\nHR Details\n");
    printf("ID = %d\n",h.id);
    printf("Name = %s\n",h.name);
    printf("Salary = %f\n",h.salary);
    printf("allowance=%f\n",h.commission);
}
