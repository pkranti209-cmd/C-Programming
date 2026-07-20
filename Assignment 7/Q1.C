Po//pointer
1.// Do all type 3 (with parameter, w/o return type) function programs using pointer.


//Assignment no:1

//Q1

#include<stdio.h>

void evenOdd(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    evenOdd(&n);

    return 0;
}

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

//Q2

#include<stdio.h>

void palindrome(int *);

int main()
{
    int n;

    printf("Enter 3 Digit Number: ");
    scanf("%d",&n);

    palindrome(&n);

    return 0;
}

void palindrome(int *n)
{
    int temp=*n, rem, rev=0;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    if(rev==*n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}


//Q3


#include<stdio.h>

void leapYear(int *);

int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d",&year);

    leapYear(&year);

    return 0;
}

void leapYear(int *year)
{
    if((*year%400==0) || (*year%4==0 && *year%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}


//Q4

#include<stdio.h>

void vowel(char *);

int main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    vowel(&ch);

    return 0;
}

void vowel(char *ch)
{
    if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'||
       *ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}


//Q5

#include<stdio.h>

void vote(int *);

int main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    vote(&age);

    return 0;
}

void vote(int *age)
{
    if(*age>=18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible");
}


//Q6

#include<stdio.h>

void checkCase(char *);

int main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    checkCase(&ch);

    return 0;
}

void checkCase(char *ch)
{
    if(*ch>='A' && *ch<='Z')
        printf("Uppercase");
    else if(*ch>='a' && *ch<='z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}

//Q7


#include<stdio.h>

void salary(float *);

int main()
{
    float basic;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    salary(&basic);

    return 0;
}

void salary(float *basic)
{
    float da,ta,hra,total;

    if(*basic<=5000)
    {
        da=*basic*0.10;
        ta=*basic*0.20;
        hra=*basic*0.25;
    }
    else
    {
        da=*basic*0.15;
        ta=*basic*0.25;
        hra=*basic*0.30;
    }

    total=*basic+da+ta+hra;

    printf("Total Salary = %.2f",total);
}



//ASSIGNMENT 2


//Q1

#include<stdio.h>

void calculator(int *,int *,char *);

int main()
{
    int a,b;
    char op;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter Operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    calculator(&a,&b,&op);

    return 0;
}

void calculator(int *a,int *b,char *op)
{
    if(*op=='+')
        printf("Result = %d",*a+*b);
    else if(*op=='-')
        printf("Result = %d",*a-*b);
    else if(*op=='*')
        printf("Result = %d",(*a)*(*b));
    else if(*op=='/')
        printf("Result = %d",*a/ *b);
    else if(*op=='%')
        printf("Result = %d",*a%*b);
    else
        printf("Invalid Operator");
}

//Q2

#include<stdio.h>

void triangle(int *,int *,int *);

int main()
{
    int a,b,c;

    printf("Enter Three Sides: ");
    scanf("%d%d%d",&a,&b,&c);

    triangle(&a,&b,&c);

    return 0;
}

void triangle(int *a,int *b,int *c)
{
    if(*a==*b && *b==*c)
        printf("Equilateral Triangle");
    else if(*a==*b || *b==*c || *a==*c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}


//Q3

#include<stdio.h>

void greatest(int *,int *,int *);

int main()
{
    int a,b,c;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    greatest(&a,&b,&c);

    return 0;
}

void greatest(int *a,int *b,int *c)
{
    if(*a>*b)
    {
        if(*a>*c)
            printf("%d is Greatest",*a);
        else
            printf("%d is Greatest",*c);
    }
    else
    {
        if(*b>*c)
            printf("%d is Greatest",*b);
        else
            printf("%d is Greatest",*c);
    }
}

//Q4

#include<stdio.h>

void result(int *);

int main()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    result(&marks);

    return 0;
}

void result(int *marks)
{
    if(*marks>75)
        printf("Distinction");
    else if(*marks>65)
        printf("First Class");
    else if(*marks>55)
        printf("Second Class");
    else if(*marks>=40)
        printf("Pass Class");
    else
        printf("Fail");
}


//Q5

#include<stdio.h>

void discount(float *,char *);

int main()
{
    float price;
    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are You Student (y/n): ");
    scanf(" %c",&student);

    discount(&price,&student);

    return 0;
}

void discount(float *price,char *student)
{
    float finalPrice;

    if(*student=='y'||*student=='Y')
    {
        if(*price>500)
            finalPrice=*price-(*price*0.20);
        else
            finalPrice=*price-(*price*0.10);
    }
    else
    {
        if(*price>600)
            finalPrice=*price-(*price*0.15);
        else
            finalPrice=*price;
    }

    printf("Final Price = %.2f",finalPrice);
}


//Q6

#include<stdio.h>

void divisible(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    divisible(&n);

    return 0;
}

void divisible(int *n)
{
    if(*n%3==0 && *n%5==0)
        printf("Divisible by Both");
    else if(*n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(*n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}


//Q7

#include<stdio.h>

void divisible(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    divisible(&n);

    return 0;
}

void divisible(int *n)
{
    if(*n%3==0 && *n%5==0)
        printf("Divisible by Both");
    else if(*n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(*n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}

 
 
 //ASSIGNMENT 3
 
 //Q1
 
 #include<stdio.h>

void printNum(int *);

int main()
{
    int x=0;

    printNum(&x);

    return 0;
}

void printNum(int *x)
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);
}

//Q2

#include<stdio.h>

void printNum(int *);

int main()
{
    int x=0;

    printNum(&x);

    return 0;
}

void printNum(int *x)
{
    int i;

    for(i=1;i<=10;i++)
        printf("%d ",i);
}


//Q3

#include<stdio.h>

void sumRange(int *,int *);

int main()
{
    int start,end;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    sumRange(&start,&end);

    return 0;
}

void sumRange(int *start,int *end)
{
    int i,sum=0;

    for(i=*start;i<=*end;i++)
        sum+=i;

    printf("Sum = %d",sum);
}

//Q4

#include<stdio.h>

void prime(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    prime(&n);

    return 0;
}

void prime(int *n)
{
    int i,count=0;

    for(i=1;i<=*n;i++)
    {
        if(*n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
}

//Q5

#include<stdio.h>

void prime(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    prime(&n);

    return 0;
}

void prime(int *n)
{
    int i,count=0;

    for(i=1;i<=*n;i++)
    {
        if(*n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
}


//Q6

#include<stdio.h>

void perfect(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    perfect(&n);

    return 0;
}

void perfect(int *n)
{
    int i,sum=0;

    for(i=1;i<*n;i++)
    {
        if(*n%i==0)
            sum+=i;
    }

    if(sum==*n)
        printf("Perfect");
    else
        printf("Not Perfect");
}


//Q7

#include<stdio.h>

void factorial(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    factorial(&n);

    return 0;
}

void factorial(int *n)
{
    int i,fact=1;

    for(i=1;i<=*n;i++)
        fact*=i;

    printf("Factorial = %d",fact);
}


//Q8

#include<stdio.h>

void strong(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    strong(&n);

    return 0;
}

void strong(int *n)
{
    int temp=*n,rem,sum=0,i,fact;

    while(temp>0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
            fact*=i;

        sum+=fact;
        temp/=10;
    }

    if(sum==*n)
        printf("Strong");
    else
        printf("Not Strong");
}

//Q9

#include<stdio.h>

void palindrome(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    palindrome(&n);

    return 0;
}

void palindrome(int *n)
{
    int temp=*n,rem,rev=0;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    if(rev==*n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

//Q10

#include<stdio.h>

void sumDigit(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    sumDigit(&n);

    return 0;
}

void sumDigit(int *n)
{
    int temp=*n;
    int first,last;

    last=temp%10;

    while(temp>=10)
        temp/=10;

    first=temp;

    printf("Sum = %d",first+last);
}


//ASSIGNMENT NO:04

//Q1

#include<stdio.h>

void sumDigit(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    sumDigit(&n);

    return 0;
}

void sumDigit(int *n)
{
    int temp=*n;
    int first,last;

    last=temp%10;

    while(temp>=10)
        temp/=10;

    first=temp;

    printf("Sum = %d",first+last);
}

//Q2

#include<stdio.h>

void prime(int *);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    prime(&n);

    return 0;
}

void prime(int *n)
{
    int i,j,count;

    for(i=2;i<=*n;i++)
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

void perfect(int *);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    perfect(&n);

    return 0;
}

void perfect(int *n)
{
    int i,j,sum;

    for(i=1;i<=*n;i++)
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

void strong(int *);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    strong(&n);

    return 0;
}

void strong(int *n)
{
    int i,temp,rem,sum,fact,j;

    for(i=1;i<=*n;i++)
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
            temp=temp/10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}

//Q5

#include<stdio.h>

void menu(int *);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    menu(&n);

    return 0;
}

void menu(int *n)
{
    int ch,temp,rem,rev=0,sum=0,i,count=0;

    printf("\n1. Even/Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            if(*n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            for(i=1;i<=*n;i++)
            {
                if(*n%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            temp=*n;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }

            if(rev==*n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(*n>0)
                printf("Positive");
            else if(*n<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp=*n;
            rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:
            temp=*n;
            sum=0;

            while(temp>0)
            {
                rem=temp%10;
                sum+=rem;
                temp/=10;
            }

            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}

