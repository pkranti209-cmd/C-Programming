//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec.
#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2, t3;
    int totalSec;

    printf("Enter First Time (hrs min sec): ");
    scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter Second Time (hrs min sec): ");
    scanf("%d%d%d", &t2.hrs, &t2.min, &t2.sec);

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if (t3.sec >= 60)
    {
        t3.min++;
        t3.sec -= 60;
    }

    if (t3.min >= 60)
    {
        t3.hrs++;
        t3.min -= 60;
    }

    printf("\nAdded Time = %d:%d:%d\n", t3.hrs, t3.min, t3.sec);

    totalSec = t1.hrs * 3600 + t1.min * 60 + t1.sec;
    printf("First Time in Seconds = %d\n", totalSec);

    return 0;
}