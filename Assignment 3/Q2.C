//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d\n", n*i);
    }

    return 0;
}