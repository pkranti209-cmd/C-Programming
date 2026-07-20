//g. mystrlower

#include <stdio.h>

void mystrlower(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    mystrlower(str);

    printf("%s", str);

    return 0;
}