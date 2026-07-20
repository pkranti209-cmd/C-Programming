//e. mystrncpy

#include <stdio.h>

void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';
}

int main()
{
    char src[100], dest[100];
    int n;

    printf("Enter string: ");
    scanf(" %[^\n]", src);

    printf("Enter n: ");
    scanf("%d", &n);

    mystrncpy(dest, src, n);

    printf("%s", dest);

    return 0;
}