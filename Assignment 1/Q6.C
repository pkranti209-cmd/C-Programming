6. Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter");
    else
        printf("Not an Alphabet");

    return 0;
}