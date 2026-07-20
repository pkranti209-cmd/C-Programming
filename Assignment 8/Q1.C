//Array
//1. Find minimum and maximum number in array.

#include<stdio.h>

int main()
{
    int arr[100], n, i, min, max;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    min=max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }

    printf("Minimum = %d\n",min);
    printf("Maximum = %d\n",max);

    return 0;
}