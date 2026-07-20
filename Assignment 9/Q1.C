//Passing array to function
//1. Do all the questions of ASS_7 using function.

//Q1

#include<stdio.h>

void accept(int arr[], int n);
void minmax(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    minmax(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;
    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void minmax(int arr[], int n)
{
    int i,min,max;

    min=max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }

    printf("Minimum = %d\n",min);
    printf("Maximum = %d",max);
}

//Q2

#include<stdio.h>

void accept(int arr[], int n);
void search(int arr[], int n, int key);

int main()
{
    int arr[100], n, key;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);

    printf("Enter Number to Search: ");
    scanf("%d",&key);

    search(arr,n,key);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void search(int arr[], int n, int key)
{
    int i,flag=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag)
        printf("Element Found");
    else
        printf("Element Not Found");
}


//Q3

#include<stdio.h>

void accept(int arr[], int n);
void sum(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    sum(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void sum(int arr[], int n)
{
    int i,total=0;

    for(i=0;i<n;i++)
        total+=arr[i];

    printf("Sum = %d",total);
}

//Q4

#include<stdio.h>

void accept(int arr[], int n);
void oddEven(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    oddEven(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void oddEven(int arr[], int n)
{
    int i;

    printf("Even Numbers:\n");

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }

    printf("\nOdd Numbers:\n");

    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}

//Q5

#include<stdio.h>

void accept(int arr[], int n);
void alternate(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    alternate(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void alternate(int arr[], int n)
{
    int i;

    printf("Alternate Elements:\n");

    for(i=0;i<n;i=i+2)
        printf("%d ",arr[i]);
}

//Q6

#include<stdio.h>

void accept(int arr[], int n);
void prime(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    prime(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void prime(int arr[], int n)
{
    int i,j,count;

    printf("Prime Numbers:\n");

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
                count++;
        }

        if(count==2)
            printf("%d ",arr[i]);
    }
}

//Q7

#include<stdio.h>

void accept(int arr[], int n);
void add(int arr[], int brr[], int crr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[100], brr[100], crr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter First Array:\n");
    accept(arr,n);

    printf("Enter Second Array:\n");
    accept(brr,n);

    add(arr,brr,crr,n);

    printf("Third Array:\n");
    display(crr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void add(int arr[], int brr[], int crr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        crr[i]=arr[i]+brr[i];
}

void display(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

//Q8

#include<stdio.h>

void accept(int arr[], int n);
void merge(int arr[], int brr[], int crr[], int n);
void display(int arr[], int size);

int main()
{
    int arr[100], brr[100], crr[200], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter First Array:\n");
    accept(arr,n);

    printf("Enter Second Array:\n");
    accept(brr,n);

    merge(arr,brr,crr,n);

    printf("Merged Array:\n");
    display(crr,2*n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void merge(int arr[], int brr[], int crr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        crr[i]=arr[i];

    for(i=0;i<n;i++)
        crr[n+i]=brr[i];
}

void display(int arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

//Q9

#include<stdio.h>

void accept(int arr[], int n);
void reverse(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);
    reverse(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void reverse(int arr[], int n)
{
    int i;

    printf("Reverse Array:\n");

    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}

//Q10


#include<stdio.h>

void accept(int arr[], int n);
void sort(int arr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[100], n;

    printf("Enter Size: ");
    scanf("%d",&n);

    accept(arr,n);

    sort(arr,n);

    printf("Sorted Array:\n");
    display(arr,n);

    return 0;
}

void accept(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void sort(int arr[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}