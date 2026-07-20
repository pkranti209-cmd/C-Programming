//Q5. Print alternate elements in array.
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

    printf("Alternate Elements:\n");

    for(i = 0; i < n; i += 2)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}