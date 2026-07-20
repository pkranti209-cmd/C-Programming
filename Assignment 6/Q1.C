//1. Convert Ass_1 and ASS_2 program into functions with four types of function.

//TYPE 1
//ASSIGNMENT 1

//Q1

#include<stdio.h>

void evenOdd();

int main()
{
    evenOdd();
    return 0;
}

void evenOdd()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}

//Q2


#include<stdio.h>

void palindrome();

int main()
{
    palindrome();
    return 0;
}

void palindrome()
{
    int n,temp,rev=0,rem;

    printf("Enter 3 digit number: ");
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

//Q3


#include<stdio.h>

void leapYear();

int main()
{
    leapYear();
    return 0;
}

void leapYear()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if((year%400==0) || (year%4==0 && year%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

//Q4

#include<stdio.h>

void checkChar();

int main()
{
    checkChar();
    return 0;
}

void checkChar()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}


//Q5

#include<stdio.h>

void vote();

int main()
{
    vote();
    return 0;
}

void vote()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

//Q6

#include<stdio.h>

void checkCase();

int main()
{
    checkCase();
    return 0;
}

void checkCase()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Uppercase");
    else if(ch>='a' && ch<='z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}

//////Q7

#include<stdio.h>

void salary();

int main()
{
    salary();
    return 0;
}

void salary()
{
    float basic,da,ta,hra,total;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    if(basic<=5000)
    {
        da=basic*0.10;
        ta=basic*0.20;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.15;
        ta=basic*0.25;
        hra=basic*0.30;
    }

    total=basic+da+ta+hra;

    printf("Total Salary = %.2f",total);
}



// TYPE 2

//Q1

#include<stdio.h>

void evenOdd(int);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    evenOdd(n);

    return 0;
}

void evenOdd(int n)
{
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}

//Q2

#include<stdio.h>

void palindrome(int);

int main()
{
    int n;

    printf("Enter 3 digit number: ");
    scanf("%d",&n);

    palindrome(n);

    return 0;
}

void palindrome(int n)
{
    int temp, rem, rev=0;

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

//Q3

#include<stdio.h>

void leapYear(int);

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    leapYear(year);

    return 0;
}

void leapYear(int year)
{
    if((year%400==0) || (year%4==0 && year%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

//Q4

#include<stdio.h>

void checkChar(char);

int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    checkChar(ch);

    return 0;
}

void checkChar(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

//Q5

#include<stdio.h>

void vote(int);

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    vote(age);

    return 0;
}

void vote(int age)
{
    if(age>=18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

//Q6

#include<stdio.h>

void checkCase(char);

int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    checkCase(ch);

    return 0;
}

void checkCase(char ch)
{
    if(ch>='A' && ch<='Z')
        printf("Uppercase");
    else if(ch>='a' && ch<='z')
        printf("Lowercase");
    else
        printf("Invalid Character");
}


//Q7

#include<stdio.h>

void salary(float);

int main()
{
    float basic;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    salary(basic);

    return 0;
}

void salary(float basic)
{
    float da, ta, hra, total;

    if(basic<=5000)
    {
        da=basic*0.10;
        ta=basic*0.20;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.15;
        ta=basic*0.25;
        hra=basic*0.30;
    }

    total=basic+da+ta+hra;

    printf("Total Salary = %.2f", total);
}



//TYPE 3 
// Q1

#include<stdio.h>

int evenOdd();

int main()
{
    if(evenOdd())
        printf("Even");
    else
        printf("Odd");

    return 0;
}

int evenOdd()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n%2==0)
        return 1;
    else
        return 0;
}

//Q2

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
    int n,temp,rev=0,rem;

    printf("Enter 3 digit number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}

//Q3

#include<stdio.h>

int leapYear();

int main()
{
    if(leapYear())
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}

int leapYear()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if((year%400==0) || (year%4==0 && year%100!=0))
        return 1;
    else
        return 0;
}


//Q4

#include<stdio.h>

int checkChar();

int main()
{
    if(checkChar())
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

int checkChar()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}


//Q5

#include<stdio.h>

int vote();

int main()
{
    if(vote())
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}

int vote()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=18)
        return 1;
    else
        return 0;
}

//Q6

#include<stdio.h>

int checkCase();

int main()
{
    int result;

    result = checkCase();

    if(result==1)
        printf("Uppercase");
    else if(result==2)
        printf("Lowercase");
    else
        printf("Invalid Character");

    return 0;
}

int checkCase()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z')
        return 1;
    else if(ch>='a' && ch<='z')
        return 2;
    else
        return 0;
}

//Q7

#include<stdio.h>

float salary();

int main()
{
    float total;

    total = salary();

    printf("Total Salary = %.2f", total);

    return 0;
}

float salary()
{
    float basic,da,ta,hra,total;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    if(basic<=5000)
    {
        da=basic*0.10;
        ta=basic*0.20;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.15;
        ta=basic*0.25;
        hra=basic*0.30;
    }

    total=basic+da+ta+hra;

    return total;
}


//TYPE4
//Q1
#include<stdio.h>

int evenOdd(int);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(evenOdd(n))
        printf("Even");
    else
        printf("Odd");

    return 0;
}

int evenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

//Q2

#include<stdio.h>

int palindrome(int);

int main()
{
    int n;

    printf("Enter 3 digit number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int palindrome(int n)
{
    int temp, rem, rev=0;

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}

//Q3

#include<stdio.h>

int leapYear(int);

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if(leapYear(year))
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}

int leapYear(int year)
{
    if((year%400==0) || (year%4==0 && year%100!=0))
        return 1;
    else
        return 0;
}


//Q4

#include<stdio.h>

int checkChar(char);

int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(checkChar(ch))
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

int checkChar(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}

//Q5


#include<stdio.h>

int vote(int);

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(vote(age))
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}

int vote(int age)
{
    if(age>=18)
        return 1;
    else
        return 0;
}

//Q6

#include<stdio.h>

int checkCase(char);

int main()
{
    char ch;
    int result;

    printf("Enter character: ");
    scanf(" %c",&ch);

    result = checkCase(ch);

    if(result==1)
        printf("Uppercase");
    else if(result==2)
        printf("Lowercase");
    else
        printf("Invalid Character");

    return 0;
}

int checkCase(char ch)
{
    if(ch>='A' && ch<='Z')
        return 1;
    else if(ch>='a' && ch<='z')
        return 2;
    else
        return 0;
}


//Q7

#include<stdio.h>

float salary(float);

int main()
{
    float basic, total;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    total = salary(basic);

    printf("Total Salary = %.2f", total);

    return 0;
}

float salary(float basic)
{
    float da, ta, hra, total;

    if(basic<=5000)
    {
        da=basic*0.10;
        ta=basic*0.20;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.15;
        ta=basic*0.25;
        hra=basic*0.30;
    }

    total = basic + da + ta + hra;

    return total;
}


//ASSIGNMENT NO :2
//TYPE 1

//Q1

#include<stdio.h>

void calculator();

int main()
{
    calculator();
    return 0;
}

void calculator()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    if(op=='+')
        printf("Result = %d",a+b);
    else if(op=='-')
        printf("Result = %d",a-b);
    else if(op=='*')
        printf("Result = %d",a*b);
    else if(op=='/')
        printf("Result = %d",a/b);
    else if(op=='%')
        printf("Result = %d",a%b);
    else
        printf("Invalid Operator");
}

//Q2

#include<stdio.h>

void triangle();

int main()
{
    triangle();
    return 0;
}

void triangle()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}

//Q3

#include<stdio.h>

void greatest();

int main()
{
    greatest();
    return 0;
}

void greatest()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            printf("%d is Greatest",a);
        else
            printf("%d is Greatest",c);
    }
    else
    {
        if(b>c)
            printf("%d is Greatest",b);
        else
            printf("%d is Greatest",c);
    }
}

//Q4

#include<stdio.h>

void result();

int main()
{
    result();
    return 0;
}

void result()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    if(marks>75)
        printf("Distinction");
    else if(marks>65)
        printf("First Class");
    else if(marks>55)
        printf("Second Class");
    else if(marks>=40)
        printf("Pass Class");
    else
        printf("Fail");
}

//Q5

#include<stdio.h>

void discount();

int main()
{
    discount();
    return 0;
}

void discount()
{
    float price,finalPrice;
    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are you Student (y/n): ");
    scanf(" %c",&student);

    if(student=='y'||student=='Y')
    {
        if(price>500)
            finalPrice=price-price*0.20;
        else
            finalPrice=price-price*0.10;
    }
    else
    {
        if(price>600)
            finalPrice=price-price*0.15;
        else
            finalPrice=price;
    }

    printf("Final Price = %.2f",finalPrice);
}

//Q6
#include<stdio.h>

void divisible();

int main()
{
    divisible();
    return 0;
}

void divisible()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
        printf("Divisible by Both");
    else if(n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}

//Q7

#include<stdio.h>

void ageCategory();

int main()
{
    ageCategory();
    return 0;
}

void ageCategory()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age<12)
        printf("Child");
    else if(age<=19)
        printf("Teenager");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");
}



//TYPE2
//Q1

#include<stdio.h>

void calculator(int,int,char);

int main()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    calculator(a,b,op);

    return 0;
}

void calculator(int a,int b,char op)
{
    if(op=='+')
        printf("Result = %d",a+b);
    else if(op=='-')
        printf("Result = %d",a-b);
    else if(op=='*')
        printf("Result = %d",a*b);
    else if(op=='/')
        printf("Result = %d",a/b);
    else if(op=='%')
        printf("Result = %d",a%b);
    else
        printf("Invalid Operator");
}

//Q2

#include<stdio.h>

void triangle(int,int,int);

int main()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    triangle(a,b,c);

    return 0;
}

void triangle(int a,int b,int c)
{
    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}

//Q3

#include<stdio.h>

void greatest(int,int,int);

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    greatest(a,b,c);

    return 0;
}

void greatest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
            printf("%d is Greatest",a);
        else
            printf("%d is Greatest",c);
    }
    else
    {
        if(b>c)
            printf("%d is Greatest",b);
        else
            printf("%d is Greatest",c);
    }
}

//Q4

#include<stdio.h>

void result(int);

int main()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    result(marks);

    return 0;
}

void result(int marks)
{
    if(marks>75)
        printf("Distinction");
    else if(marks>65)
        printf("First Class");
    else if(marks>55)
        printf("Second Class");
    else if(marks>=40)
        printf("Pass Class");
    else
        printf("Fail");
}

//Q5

#include<stdio.h>

void discount(float,char);

int main()
{
    float price;
    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are you Student (y/n): ");
    scanf(" %c",&student);

    discount(price,student);

    return 0;
}

void discount(float price,char student)
{
    float finalPrice;

    if(student=='y'||student=='Y')
    {
        if(price>500)
            finalPrice=price-price*0.20;
        else
            finalPrice=price-price*0.10;
    }
    else
    {
        if(price>600)
            finalPrice=price-price*0.15;
        else
            finalPrice=price;
    }

    printf("Final Price = %.2f",finalPrice);
}


//Q6

#include<stdio.h>

void divisible(int);

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    divisible(n);

    return 0;
}

void divisible(int n)
{
    if(n%3==0 && n%5==0)
        printf("Divisible by Both");
    else if(n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}


//Q7

#include<stdio.h>

void ageCategory(int);

int main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    ageCategory(age);

    return 0;
}

void ageCategory(int age)
{
    if(age<12)
        printf("Child");
    else if(age<=19)
        printf("Teenager");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");
}

//TYPE3
//Q1

#include<stdio.h>

int calculator();

int main()
{
    calculator();
    return 0;
}

int calculator()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    if(op=='+')
        printf("Result = %d",a+b);
    else if(op=='-')
        printf("Result = %d",a-b);
    else if(op=='*')
        printf("Result = %d",a*b);
    else if(op=='/')
        printf("Result = %d",a/b);
    else if(op=='%')
        printf("Result = %d",a%b);
    else
        printf("Invalid Operator");

    return 0;
}

//Q2

#include<stdio.h>

int triangle();

int main()
{
    triangle();
    return 0;
}

int triangle()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}

//Q3

#include<stdio.h>

int greatest();

int main()
{
    greatest();
    return 0;
}

int greatest()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            printf("%d is Greatest",a);
        else
            printf("%d is Greatest",c);
    }
    else
    {
        if(b>c)
            printf("%d is Greatest",b);
        else
            printf("%d is Greatest",c);
    }

    return 0;
}

//Q4


#include<stdio.h>

int result();

int main()
{
    result();
    return 0;
}

int result()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    if(marks>75)
        printf("Distinction");
    else if(marks>65)
        printf("First Class");
    else if(marks>55)
        printf("Second Class");
    else if(marks>=40)
        printf("Pass Class");
    else
        printf("Fail");

    return 0;
}

//Q5

#include<stdio.h>

float discount();

int main()
{
    float finalPrice;

    finalPrice = discount();

    printf("Final Price = %.2f", finalPrice);

    return 0;
}

float discount()
{
    float price, finalPrice;
    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are you Student (y/n): ");
    scanf(" %c",&student);

    if(student=='y'||student=='Y')
    {
        if(price>500)
            finalPrice=price-price*0.20;
        else
            finalPrice=price-price*0.10;
    }
    else
    {
        if(price>600)
            finalPrice=price-price*0.15;
        else
            finalPrice=price;
    }

    return finalPrice;
}

//Q6

#include<stdio.h>

int divisible();

int main()
{
    divisible();
    return 0;
}

int divisible()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
        printf("Divisible by Both");
    else if(n%3==0)
        printf("Divisible by 3 but not by 5");
    else if(n%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");

    return 0;
}

//Q7

#include<stdio.h>

int ageCategory();

int main()
{
    ageCategory();
    return 0;
}

int ageCategory()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age<12)
        printf("Child");
    else if(age<=19)
        printf("Teenager");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}


//TYPE4
//Q1


#include<stdio.h>

int calculator(int,int,char);

int main()
{
    int a,b,result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    result = calculator(a,b,op);

    printf("Result = %d",result);

    return 0;
}

int calculator(int a,int b,char op)
{
    if(op=='+')
        return a+b;
    else if(op=='-')
        return a-b;
    else if(op=='*')
        return a*b;
    else if(op=='/')
        return a/b;
    else if(op=='%')
        return a%b;
    else
        return 0;
}

//Q2

#include<stdio.h>

int triangle(int,int,int);

int main()
{
    int a,b,c,result;

    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    result=triangle(a,b,c);

    if(result==1)
        printf("Equilateral Triangle");
    else if(result==2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}

int triangle(int a,int b,int c)
{
    if(a==b && b==c)
        return 1;
    else if(a==b || b==c || a==c)
        return 2;
    else
        return 3;
}

//Q3

#include<stdio.h>

int greatest(int,int,int);

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("Greatest = %d",greatest(a,b,c));

    return 0;
}

int greatest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}

//Q4

#include<stdio.h>

int result(int);

int main()
{
    int marks,r;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    r=result(marks);

    if(r==1)
        printf("Distinction");
    else if(r==2)
        printf("First Class");
    else if(r==3)
        printf("Second Class");
    else if(r==4)
        printf("Pass Class");
    else
        printf("Fail");

    return 0;
}

int result(int marks)
{
    if(marks>75)
        return 1;
    else if(marks>65)
        return 2;
    else if(marks>55)
        return 3;
    else if(marks>=40)
        return 4;
    else
        return 5;
}


//Q5

#include<stdio.h>

float discount(float,char);

int main()
{
    float price;

    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are you Student (y/n): ");
    scanf(" %c",&student);

    printf("Final Price = %.2f",discount(price,student));

    return 0;
}

float discount(float price,char student)
{
    if(student=='y'||student=='Y')
    {
        if(price>500)
            return price-price*0.20;
        else
            return price-price*0.10;
    }
    else
    {
        if(price>600)
            return price-price*0.15;
        else
            return price;
    }
}

//Q6

#include<stdio.h>

int divisible(int);

int main()
{
    int n,r;

    printf("Enter Number: ");
    scanf("%d",&n);

    r=divisible(n);

    if(r==1)
        printf("Divisible by Both");
    else if(r==2)
        printf("Divisible by 3 but not by 5");
    else if(r==3)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");

    return 0;
}

int divisible(int n)
{
    if(n%3==0 && n%5==0)
        return 1;
    else if(n%3==0)
        return 2;
    else if(n%5==0)
        return 3;
    else
        return 4;
}


//Q7

#include<stdio.h>

int ageCategory(int);

int main()
{
    int age,r;

    printf("Enter Age: ");
    scanf("%d",&age);

    r=ageCategory(age);

    if(r==1)
        printf("Child");
    else if(r==2)
        printf("Teenager");
    else if(r==3)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}

int ageCategory(int age)
{
    if(age<12)
        return 1;
    else if(age<=19)
        return 2;
    else if(age<=59)
        return 3;
    else
        return 4;
}













