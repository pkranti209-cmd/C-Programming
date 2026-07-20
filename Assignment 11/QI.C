//i. mystrstr
#include <stdio.h>

int mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if(sub[j] == '\0')
            return i;
    }

    return -1;
}

int main()
{
    char str[100], sub[100];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter substring: ");
    scanf(" %[^\n]", sub);

    printf("Position = %d", mystrstr(str, sub));

    return 0;
}