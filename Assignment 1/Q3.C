//3. Write a program to check whether a given year is a leap year.

#include<stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}