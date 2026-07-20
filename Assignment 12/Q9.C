//Q9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str1, *str2;
    int size1, size2;
    int len1 = 0, len2 = 0;

    printf("Enter size of first string: ");
    scanf("%d", &size1);

    getchar();

    str1 = (char *)malloc(size1 * sizeof(char));

    printf("Enter first string: ");
    fgets(str1, size1, stdin);

    printf("Enter size of second string: ");
    scanf("%d", &size2);

    getchar();

    str2 = (char *)malloc(size2 * sizeof(char));

    printf("Enter second string: ");
    fgets(str2, size2, stdin);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 > len2)
        printf("Larger String = %s", str1);
    else
        printf("Larger String = %s", str2);

    free(str1);
    free(str2);

    return 0;
}