//Q4. Find odd and even among the numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even Numbers:\n");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd Numbers:\n");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}