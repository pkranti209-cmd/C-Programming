//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime

#include <stdio.h>

int main()
{
    int n, i, count=0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}