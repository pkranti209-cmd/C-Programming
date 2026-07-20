//j. mystrcasecmp

#include <stdio.h>

char lower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}

int mystrcasecmp(char s1[], char s2[])
{
    int i = 0;

    while(lower(s1[i]) == lower(s2[i]))
    {
        if(s1[i] == '\0')
            return 0;
        i++;
    }

    return lower(s1[i]) - lower(s2[i]);
}

int main()
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if(mystrcasecmp(s1, s2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}