//h. mystrrev

#include <stdio.h>

void mystrrev(char str[])
{
    int len = 0, i;
    char temp;

    while(str[len] != '\0')
        len++;

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    mystrrev(str);

    printf("%s", str);

    return 0;
}