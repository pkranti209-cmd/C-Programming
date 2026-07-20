//Q6.Date (date, month, year)

#include<stdio.h>

struct calender
{
	
	int date;
	int month;
	int year;
	
	
};

int main()
{
	
	struct calender c;
	
	printf("Enter date: ");
    scanf("%d",&c.date);

    printf("Enter month: ");
    scanf("%d",&c.month);

    printf("Enter year: ");
    scanf("%d",&c.year);
    
    printf("\ncalender Details\n");
    printf("date = %d\n",c.date);
    printf("month = %d\n",c.month);
    printf("year = %d\n",c.year);
    
    
    
    
    
 }
	
    
    

    
	
