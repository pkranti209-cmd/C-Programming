//Q6. Accept array and print only prime numbers of array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i, j, prime;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime Numbers:\n");

    for(i = 0; i < n; i++)
    {
        prime = 1;

        if(arr[i] <= 1)
            prime = 0;

        for(j = 2; j <= arr[i] / 2; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
            printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}