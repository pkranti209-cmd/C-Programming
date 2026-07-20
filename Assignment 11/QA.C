//Strings user define function
//1. Write a user define functions for ::
//a. mystrcpy
#include <stdio.h>

void mystrcpy(char dest[], char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char src[100], dest[100];

    printf("Enter string: ");
    scanf("%[^\n]", src);

    mystrcpy(dest, src);

    printf("Copied String = %s", dest);

    return 0;
}