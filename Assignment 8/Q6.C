//6. Accept array and print only prime numbers of array.

#include<stdio.h>

int main()
{
    int arr[100], n, i, j, prime;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Prime Numbers:\n");

    for(i=0;i<n;i++)
    {
        if(arr[i]<2)
            continue;

        prime=1;

        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                prime=0;
                break;
            }
        }

        if(prime)
            printf("%d ",arr[i]);
    }

    return 0;
}