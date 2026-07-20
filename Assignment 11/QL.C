//Ql. mystrrchr

#include <stdio.h>

int mystrrchr(char str[], char ch)
{
    int i, pos = -1;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            pos = i;
    }

    return pos;
}

int main()
{
    char str[100], ch;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Last Position = %d", mystrrchr(str, ch));

    return 0;
}