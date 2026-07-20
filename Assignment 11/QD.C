//d. mystrcat

#include <stdio.h>

void mystrcat(char s1[], char s2[])
{
    int i = 0, j = 0;

    while(s1[i] != '\0')
        i++;

    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

int main()
{
    char s1[200], s2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    mystrcat(s1, s2);

    printf("%s", s1);

    return 0;
}