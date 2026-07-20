//Q3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took
//maximum number of wickets.

#include <stdio.h>

struct Player
{
    char name[50];
    int matches;
    int runs;
    int wickets;
};

int main()
{
    struct Player p[10];
    int i;
    int maxRun = 0, maxWicket = 0;

    for(i=0;i<10;i++)
    {
        printf("\nEnter Details of Player %d\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Matches: ");
        scanf("%d",&p[i].matches);

        printf("Runs: ");
        scanf("%d",&p[i].runs);

        printf("Wickets: ");
        scanf("%d",&p[i].wickets);
    }

    printf("\nPlayer Details\n");

    for(i=0;i<10;i++)
    {
        printf("\nName : %s",p[i].name);
        printf("\nMatches : %d",p[i].matches);
        printf("\nRuns : %d",p[i].runs);
        printf("\nWickets : %d\n",p[i].wickets);

        if(p[i].runs > p[maxRun].runs)
            maxRun = i;

        if(p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\nPlayer with Maximum Runs\n");
    printf("Name : %s\nRuns : %d\n",p[maxRun].name,p[maxRun].runs);

    printf("\nPlayer with Maximum Wickets\n");
    printf("Name : %s\nWickets : %d\n",p[maxWicket].name,p[maxWicket].wickets);

    return 0;
}
