//2. Search the given number in array.

#include<stdio.h>

int main()
{
    int arr[100], n, i, num, found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Found at position %d",i+1);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Not Found");

    return 0;
}