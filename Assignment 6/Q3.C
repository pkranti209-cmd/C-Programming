//3. Convert Ass_4 into two type of function i.e. w/o parameter, w/o return type and with
//parameter and w/o return type.


//w/o parameter, w/o return type
//Q1

#include<stdio.h>

void armstrong();

int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int n,i,temp,rem,sum;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            sum+=rem*rem*rem;
            temp/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}


//Q2

#include<stdio.h>

void prime();

int main()
{
    prime();
    return 0;
}

void prime()
{
    int n,i,j,count;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }

        if(count==2)
            printf("%d ",i);
    }
}


//Q3

#include<stdio.h>

void perfect();

int main()
{
    perfect();
    return 0;
}

void perfect()
{
    int n,i,j,sum;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }

        if(sum==i)
            printf("%d ",i);
    }
}


//Q4

#include<stdio.h>

void strong();

int main()
{
    strong();
    return 0;
}

void strong()
{
    int n,i,temp,rem,sum,fact,j;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            fact=1;

            for(j=1;j<=rem;j++)
                fact*=j;

            sum+=fact;
            temp/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}

//Q5


#include<stdio.h>

void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int ch,n,temp,rem,rev=0,sum=0,i,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("\n1. Even/Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            temp=n;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            if(rev==n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp=n;
            rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:
            temp=n;
            sum=0;

            while(temp>0)
            {
                rem=temp%10;
                sum+=rem;
                temp=temp/10;
            }

            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}


//TYPE 2

//Q1

#include<stdio.h>

void armstrong(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    armstrong(n);

    return 0;
}

void armstrong(int n)
{
    int i,temp,rem,sum;

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            sum+=rem*rem*rem;
            temp/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}

//Q2

#include<stdio.h>

void prime(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    prime(n);

    return 0;
}

void prime(int n)
{
    int i,j,count;

    for(i=2;i<=n;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }

        if(count==2)
            printf("%d ",i);
    }
}

//Q3

#include<stdio.h>

void perfect(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    perfect(n);

    return 0;
}

void perfect(int n)
{
    int i,j,sum;

    for(i=1;i<=n;i++)
    {
        sum=0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }

        if(sum==i)
            printf("%d ",i);
    }
}


//Q4

#include<stdio.h>

void strong(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    strong(n);

    return 0;
}

void strong(int n)
{
    int i,temp,rem,sum,fact,j;

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            fact=1;

            for(j=1;j<=rem;j++)
                fact*=j;

            sum+=fact;
            temp/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}

//Q5

#include<stdio.h>

void menu(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    menu(n);

    return 0;
}

void menu(int n)
{
    int ch,temp,rem,rev=0,sum=0,i,count=0;

    printf("\n1. Even/Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            temp=n;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            if(rev==n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp=n;
            rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:
            temp=n;
            sum=0;

            while(temp>0)
            {
                rem=temp%10;
                sum+=rem;
                temp=temp/10;
            }

            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}


