//2. Print a right-angled triangle pattern
//Input: n = 5
//Output:
//*
//**
//***
//****
//*****

#include <stdio.h>

int main()
{
    int n,i,j;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}