//Q2. WAP Replace all Occurrences of ‘a’ with $ in a String
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
        if(str[i] == 'a')
            str[i] = '$';
    }

    printf("Modified String = %s", str);

    free(str);
    return 0;
}