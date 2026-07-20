//8. Write a C program to input the length and width of a rectangle and find its perimeter.

#include <stdio.h>

int main()
{
    int length = 10;
    int width = 5;

    int perimeter = 2 * (length + width);

    printf("Perimeter = %d", perimeter);

    return 0;
}