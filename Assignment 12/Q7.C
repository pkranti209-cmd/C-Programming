//Q7. WAP to Remove the Characters of Odd Index Values in a String
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str, *newStr;
    int size, i, j = 0;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));
    newStr = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    for(i = 0; str[i] != '\0'; i += 2)
    {
        newStr[j++] = str[i];
    }

    newStr[j] = '\0';

    printf("New String = %s", newStr);

    free(str);
    free(newStr);

    return 0;
}