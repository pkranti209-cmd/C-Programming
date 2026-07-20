//String built in function
//1. Use around 21 built-in functions of string in program.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "Hello World";
    char str4[100];
    char *ptr;

    // 1. strlen()
    printf("1. Length of str1 = %lu\n", strlen(str1));

    // 2. strcpy()
    strcpy(str4, str1);
    printf("2. strcpy = %s\n", str4);

    // 3. strncpy()
    strncpy(str4, str2, 3);
    str4[3] = '\0';
    printf("3. strncpy = %s\n", str4);

    // 4. strcat()
    strcpy(str4, str1);
    strcat(str4, str2);
    printf("4. strcat = %s\n", str4);

    // 5. strncat()
    strcpy(str4, str1);
    strncat(str4, str2, 3);
    printf("5. strncat = %s\n", str4);

    // 6. strcmp()
    printf("6. strcmp = %d\n", strcmp(str1, str2));

    // 7. strncmp()
    printf("7. strncmp = %d\n", strncmp(str1, "Helium", 3));

    // 8. strchr()
    ptr = strchr(str3, 'W');
    printf("8. strchr = %s\n", ptr);

    // 9. strrchr()
    ptr = strrchr(str3, 'l');
    printf("9. strrchr = %s\n", ptr);

    // 10. strstr()
    ptr = strstr(str3, "World");
    printf("10. strstr = %s\n", ptr);

    // 11. strtok()
    char temp[100] = "C,Java,Python";
    printf("11. strtok = ");
    ptr = strtok(temp, ",");
    while (ptr != NULL)
    {
        printf("%s ", ptr);
        ptr = strtok(NULL, ",");
    }
    printf("\n");

    // 12. memset()
    memset(str4, '*', 5);
    str4[5] = '\0';
    printf("12. memset = %s\n", str4);

    // 13. memcpy()
    memcpy(str4, str1, strlen(str1) + 1);
    printf("13. memcpy = %s\n", str4);

    // 14. memmove()
    memmove(str4 + 2, str4, 3);
    printf("14. memmove = %s\n", str4);

    // 15. memcmp()
    printf("15. memcmp = %d\n", memcmp("ABC", "ABD", 3));

    // 16. memchr()
    char arr[] = {'A','B','C','D'};
    ptr = (char *)memchr(arr, 'C', 4);
    printf("16. memchr = %c\n", *ptr);

    // 17. strspn()
    printf("17. strspn = %lu\n", strspn("abc123", "abc"));

    // 18. strcspn()
    printf("18. strcspn = %lu\n", strcspn("abc123", "123"));

    // 19. strpbrk()
    ptr = strpbrk("hello", "aeiou");
    printf("19. strpbrk = %c\n", *ptr);

    // 20. strerror()
    printf("20. strerror = %s\n", strerror(2));

    // 21. strcoll()
    printf("21. strcoll = %d\n", strcoll("Apple", "Banana"));

    return 0;
}