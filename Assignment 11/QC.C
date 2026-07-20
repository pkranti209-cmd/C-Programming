//c. mystrcmp

#include <stdio.h>

int mystrcmp(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] == s2[i])
    {
        if(s1[i] == '\0')
            return 0;
        i++;
    }

    return s1[i] - s2[i];
}

int main()
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if(mystrcmp(s1, s2) == 0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}