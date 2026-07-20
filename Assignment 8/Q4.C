//4. Find odd and even among the numbers.

#include<stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Even Numbers: ");
    for(i=0;i<n;i++)
        if(arr[i]%2==0)
            printf("%d ",arr[i]);

    printf("\nOdd Numbers: ");
    for(i=0;i<n;i++)
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);

    return 0;
}