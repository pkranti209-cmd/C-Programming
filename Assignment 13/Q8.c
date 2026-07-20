//Q8. Merge two arrays
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, *a, *b, *c, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    a = (int *)malloc(n1 * sizeof(int));
    b = (int *)malloc(n2 * sizeof(int));
    c = (int *)malloc((n1 + n2) * sizeof(int));

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged Array:\n");

    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);

    return 0;
}