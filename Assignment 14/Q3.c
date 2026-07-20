//Q3. Admin (id, name, salary, allowance)

#include<stdio.h>

struct admin
{
	int id;
	char name[20];
	float salary;
	float allowance;
};
void main()
{
	struct admin a;
	printf("Enter ID: ");
    scanf("%d",&a.id);

    printf("Enter Name: ");
    scanf("%s",a.name);

    printf("Enter Salary: ");
    scanf("%f",&a.salary);
    
    printf("Enter allowance: ");
    scanf("%f",&a.allowance);
    
    printf("\nadmin Details\n");
    printf("ID = %d\n",a.id);
    printf("Name = %s\n",a.name);
    printf("Salary = %f\n",a.salary);
    printf("allowance=%f\n",a.allowance);
}
