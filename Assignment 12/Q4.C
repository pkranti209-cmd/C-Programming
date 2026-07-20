//Q4. WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str, temp;
    int size, i, len = 0;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    while(str[len] != '\0')
        len++;

    if(str[len - 1] == '\n')
        len--;

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("New String = %s", str);

    free(str);
    return 0;
}