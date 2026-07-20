//Q5. WAP to Count the Number of Vowels in a String
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size, i, count = 0;

    printf("Enter string size: ");
    scanf("%d", &size);

    getchar();

    str = (char *)malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }

    printf("Vowels = %d", count);

    free(str);
    return 0;
}