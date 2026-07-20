//5. Write a menu driven program to take a number for user and perform operations as follows.

//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.

#include <stdio.h>

int main()
{
    int ch, n, temp, rem, rev=0, sum=0, i, count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("\n1.Even/Odd");
    printf("\n2.Prime");
    printf("\n3.Palindrome");
    printf("\n4.Positive/Negative/Zero");
    printf("\n5.Reverse");
    printf("\n6.Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        if(n%2==0)
            printf("Even");
        else
            printf("Odd");
    }
    else
    {
        if(ch==2)
        {
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
        else
        {
            if(ch==3)
            {
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
            else
            {
                if(ch==4)
                {
                    if(n>0)
                        printf("Positive");
                    else if(n<0)
                        printf("Negative");
                    else
                        printf("Zero");
                }
                else
                {
                    if(ch==5)
                    {
                        temp=n;
                        rev=0;

                        while(temp>0)
                        {
                            rem=temp%10;
                            rev=rev*10+rem;
                            temp=temp/10;
                        }

                        printf("Reverse = %d",rev);
                    }
                    else
                    {
                        if(ch==6)
                        {
                            temp=n;
                            sum=0;

                            while(temp>0)
                            {
                                rem=temp%10;
                                sum=sum+rem;
                                temp=temp/10;
                            }

                            printf("Sum of Digits = %d",sum);
                        }
                        else
                        {
                            printf("Invalid Choice");
                        }
                    }
                }
            }
        }
    }

    return 0;
}