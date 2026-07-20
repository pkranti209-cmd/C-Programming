//3. Find sum of all numbers.

#include<stdio.h>

int main()
{
    int arr[100], n, i, sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Sum = %d",sum);

    return 0;
}