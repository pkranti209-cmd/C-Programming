//Q1. Write a program to scan string from user then scan a single character and search it
//in a accepted string.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str, ch;
    int i, size, found = 0;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character found at index %d\n", i);
            found = 1;
        }
    }

    if(found == 0)
        printf("Character not found");

    free(str);
    return 0;
}
