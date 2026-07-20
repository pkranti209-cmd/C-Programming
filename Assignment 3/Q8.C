//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong

#include <stdio.h>

int main()
{
    int n, temp, rem, sum=0, i, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}