//n. mystrnstr

#include <stdio.h>

int mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j] && (i + j) < n)
            j++;

        if(sub[j] == '\0')
            return i;
    }

    return -1;
}

int main()
{
    char str[100], sub[100];
    int n;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter substring: ");
    scanf(" %[^\n]", sub);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Position = %d", mystrnstr(str, sub, n));

    return 0;
}