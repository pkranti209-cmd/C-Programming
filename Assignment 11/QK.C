//k. mystrchr

#include <stdio.h>

int mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            return i;
    }

    return -1;
}

int main()
{
    char str[100], ch;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Position = %d", mystrchr(str, ch));

    return 0;
}