//Q7. Take two array and add sum in third array

//Example-
//arr[5]= {1,2, 3, 4,5}

//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *a, *b, *c, i;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Third Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);

    return 0;
}