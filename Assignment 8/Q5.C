//5. Print alternate elements in array.

#include<stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Alternate Elements:\n");

    for(i=0;i<n;i+=2)
        printf("%d ",arr[i]);

    return 0;
}