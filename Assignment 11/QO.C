//o. mystrncat

#include <stdio.h>

void mystrncat(char s1[], char s2[], int n)
{
    int i = 0, j = 0;

    while(s1[i] != '\0')
        i++;

    while(s2[j] != '\0' && j < n)
    {
        s1[i++] = s2[j++];
    }

    s1[i] = '\0';
}

int main()
{
    char s1[200], s2[100];
    int n;

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    printf("Enter n: ");
    scanf("%d", &n);

    mystrncat(s1, s2, n);

    printf("%s", s1);

    return 0;
}