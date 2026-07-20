//3. Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32

#include <stdio.h>

int main()
{
    float c = 30;
    float f = (c * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", f);

    return 0;
}