//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

#include<stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %d", a+b);
            break;

        case '-':
            printf("Result = %d", a-b);
            break;

        case '*':
            printf("Result = %d", a*b);
            break;

        case '/':
            printf("Result = %d", a/b);
            break;

        case '%':
            printf("Result = %d", a%b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}