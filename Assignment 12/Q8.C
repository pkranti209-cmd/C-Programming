//Q8. WAP to Calculate the Number of Words Present in a String
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size, i, words = 1;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    free(str);
    return 0;
}