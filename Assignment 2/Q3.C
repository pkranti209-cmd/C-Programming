//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
            printf("%d is Greatest", a);
        else
            printf("%d is Greatest", c);
    }
    else
    {
        if(b>c)
            printf("%d is Greatest", b);
        else
            printf("%d is Greatest", c);
    }

    return 0;
}