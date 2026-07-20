//2. Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>

int main()
{
    int n, temp, rev = 0, rem;

    printf("Enter a 3-digit number: ");
    scanf("%d",&n);

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome");

    return 0;
}