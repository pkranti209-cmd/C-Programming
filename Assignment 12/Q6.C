//Q6. WAP to Take in a String and Replace Every Blank Space with special symbol.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size, i;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            str[i] = '*';
    }

    printf("Modified String = %s", str);

    free(str);
    return 0;
}