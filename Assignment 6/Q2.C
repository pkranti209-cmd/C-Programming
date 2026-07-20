//2. Convert Ass_3 program into functions with four types of function.(Excluding range
//programs) . convert range programs into two type of function i.e. w/o parameter, w/o
//return type and with parameter and w/o return type.

//TYPE1
//Q1

#include<stdio.h>

void printNum();

int main()
{
    printNum();
    return 0;
}

void printNum()
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);
}


//Q2

#include<stdio.h>

void table();

int main()
{
    table();
    return 0;
}

void table()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
        printf("%d ",n*i);
}

//Q3

#include<stdio.h>

void sumRange();

int main()
{
    sumRange();
    return 0;
}

void sumRange()
{
    int start,end,i,sum=0;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++)
        sum+=i;

    printf("Sum = %d",sum);
}

//Q4

#include<stdio.h>

void prime();

int main()
{
    prime();
    return 0;
}

void prime()
{
    int n,i,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
}

//Q5

#include<stdio.h>

void armstrong();

int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int n,temp,rem,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp=temp/10;
    }

    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

//Q6

#include<stdio.h>

void perfect();

int main()
{
    perfect();
    return 0;
}

void perfect()
{
    int n,i,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    if(sum==n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

//Q7

#include<stdio.h>

void factorial();

int main()
{
    factorial();
    return 0;
}

void factorial()
{
    int n,i,fact=1;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact*=i;

    printf("Factorial = %d",fact);
}

//Q8

#include<stdio.h>

void strong();

int main()
{
    strong();
    return 0;
}

void strong()
{
    int n,temp,rem,sum=0,i,fact;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
            fact*=i;

        sum+=fact;
        temp=temp/10;
    }

    if(sum==n)
        printf("Strong");
    else
        printf("Not Strong");
}

//Q9

#include<stdio.h>

void palindrome();

int main()
{
    palindrome();
    return 0;
}

void palindrome()
{
    int n,temp,rem,rev=0;

    printf("Enter Number: ");
    scanf("%d",&n);

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
}

//Q10

#include<stdio.h>

void sumDigit();

int main()
{
    sumDigit();
    return 0;
}

void sumDigit()
{
    int n,first,last;

    printf("Enter Number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
        n=n/10;

    first=n;

    printf("Sum = %d",first+last);
}


//TYPE2
//Q1

#include<stdio.h>

void printNum();

int main()
{
    printNum();
    return 0;
}

void printNum()
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);
}

//Q2

#include<stdio.h>

void table(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    table(n);

    return 0;
}

void table(int n)
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",n*i);
}

//Q3

#include<stdio.h>

void sumRange(int,int);

int main()
{
    int start,end;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    sumRange(start,end);

    return 0;
}

void sumRange(int start,int end)
{
    int i,sum=0;

    for(i=start;i<=end;i++)
        sum+=i;

    printf("Sum = %d",sum);
}

//Q4

#include<stdio.h>

void prime(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    prime(n);

    return 0;
}

void prime(int n)
{
    int i,count=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
}

//Q5

#include<stdio.h>

void armstrong(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    armstrong(n);

    return 0;
}

void armstrong(int n)
{
    int temp=n,rem,sum=0;

    while(temp>0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }

    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

//Q6

#include<stdio.h>

void perfect(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    perfect(n);

    return 0;
}

void perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    if(sum==n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

//Q7

#include<stdio.h>

void factorial(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    factorial(n);

    return 0;
}

void factorial(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        fact*=i;

    printf("Factorial = %d",fact);
}


//Q8


#include<stdio.h>

void strong(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    strong(n);

    return 0;
}

void strong(int n)
{
    int temp=n,rem,sum=0,i,fact;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
            fact*=i;

        sum+=fact;
        temp/=10;
    }

    if(sum==n)
        printf("Strong");
    else
        printf("Not Strong");
}


//Q9

#include<stdio.h>

void palindrome(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    palindrome(n);

    return 0;
}

void palindrome(int n)
{
    int temp=n,rem,rev=0;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    if(rev==n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

//Q10

#include<stdio.h>

void sumDigit(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    sumDigit(n);

    return 0;
}

void sumDigit(int n)
{
    int first,last,temp;

    temp=n;
    last=temp%10;

    while(temp>=10)
        temp/=10;

    first=temp;

    printf("Sum = %d",first+last);
}


//Q1

#include<stdio.h>

int printNum();

int main()
{
    printNum();
    return 0;
}

int printNum()
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);

    return 0;
}

//Q2

#include<stdio.h>

int table();

int main()
{
    table();
    return 0;
}

int table()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
        printf("%d ",n*i);

    return 0;
}

//Q3

#include<stdio.h>

int sumRange();

int main()
{
    printf("Sum = %d",sumRange());
    return 0;
}

int sumRange()
{
    int start,end,i,sum=0;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++)
        sum+=i;

    return sum;
}

//Q4


#include<stdio.h>

int prime();

int main()
{
    if(prime())
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

int prime()
{
    int n,i,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        return 1;
    else
        return 0;
}


//Q5

#include<stdio.h>

int armstrong();

int main()
{
    if(armstrong())
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

int armstrong()
{
    int n,temp,rem,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

//Q6

#include<stdio.h>

int perfect();

int main()
{
    if(perfect())
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}

int perfect()
{
    int n,i,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

//Q7


#include<stdio.h>

int factorial();

int main()
{
    printf("Factorial = %d",factorial());
    return 0;
}

int factorial()
{
    int n,i,fact=1;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact*=i;

    return fact;
}

//Q8

#include<stdio.h>

int strong();

int main()
{
    if(strong())
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

int strong()
{
    int n,temp,rem,sum=0,i,fact;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
            fact*=i;

        sum+=fact;
        temp/=10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

//Q9

#include<stdio.h>

int palindrome();

int main()
{
    if(palindrome())
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int palindrome()
{
    int n,temp,rem,rev=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}

//Q10

#include<stdio.h>

int sumDigit();

int main()
{
    printf("Sum = %d",sumDigit());
    return 0;
}

int sumDigit()
{
    int n,first,last;

    printf("Enter Number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
        n/=10;

    first=n;

    return first+last;
}


//TYPE4
//Q1

#include<stdio.h>

int printNum(int);

int main()
{
    printNum(0);
    return 0;
}

int printNum(int x)
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);

    return 0;
}

//Q2

#include<stdio.h>

int table(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    table(n);

    return 0;
}

int table(int n)
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",n*i);

    return 0;
}


//Q3

#include<stdio.h>

int sumRange(int,int);

int main()
{
    int start,end;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    printf("Sum = %d",sumRange(start,end));

    return 0;
}

int sumRange(int start,int end)
{
    int i,sum=0;

    for(i=start;i<=end;i++)
        sum+=i;

    return sum;
}


//Q4

#include<stdio.h>

int prime(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(prime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

int prime(int n)
{
    int i,count=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        return 1;
    else
        return 0;
}


//Q5

#include<stdio.h>

int armstrong(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

int armstrong(int n)
{
    int temp=n,rem,sum=0;

    while(temp>0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}


//Q6

#include<stdio.h>

int perfect(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(perfect(n))
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}

int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

//Q7

#include<stdio.h>

int factorial(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("Factorial = %d",factorial(n));

    return 0;
}

int factorial(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        fact*=i;

    return fact;
}

//Q8

#include<stdio.h>

int strong(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(strong(n))
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

int strong(int n)
{
    int temp=n,rem,sum=0,i,fact;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
            fact*=i;

        sum+=fact;
        temp/=10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

//Q9

#include<stdio.h>

int palindrome(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int palindrome(int n)
{
    int temp=n,rem,rev=0;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}

//Q10

#include<stdio.h>

int sumDigit(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("Sum = %d",sumDigit(n));

    return 0;
}

int sumDigit(int n)
{
    int first,last,temp;

    temp=n;
    last=temp%10;

    while(temp>=10)
        temp/=10;

    first=temp;

    return first+last;
}


