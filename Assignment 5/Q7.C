//7. Print a Floyd’s triangle pattern
//Input: n = 4
//Output:
//1
//2 3
//4 5 6
//7 8 9 10

#include <stdio.h>

int main()
{
    int n,i,j,num=1;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}