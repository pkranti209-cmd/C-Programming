//f. mystrupper

#include <stdio.h>

void mystrupper(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    mystrupper(str);

    printf("%s", str);

    return 0;
}