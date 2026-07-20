//Q3. Find sum of all numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
    return 0;
}s