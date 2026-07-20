//Q9. Reverse the given array.
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

    printf("Reverse Array:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}