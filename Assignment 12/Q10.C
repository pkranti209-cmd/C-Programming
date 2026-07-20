//Q10. Write a program to check the string is palindrome or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size, i, len = 0, flag = 1;

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

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    free(str);
    return 0;
}