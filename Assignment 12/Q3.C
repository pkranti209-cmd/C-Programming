//Q3. WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size, n, i;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    printf("Enter index to remove: ");
    scanf("%d", &n);

    for(i = n; str[i] != '\0'; i++)
        str[i] = str[i + 1];

    printf("New String = %s", str);

    free(str);
    return 0;
}