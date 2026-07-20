#include<stdio.h>
#include<string.h>

struct Player
{
    int jerseyNo;
    char name[30];
    int runs;
    int wickets;
    int matches;
};

struct Player p[100];
int count = 0;



//ADDPLAYER

void addPlayer()
{
    printf("\nEnter Jersey Number : ");
    scanf("%d",&p[count].jerseyNo);

    printf("Enter Player Name : ");
    scanf("%s",p[count].name);

    printf("Enter Runs : ");
    scanf("%d",&p[count].runs);

    printf("Enter Wickets : ");
    scanf("%d",&p[count].wickets);

    printf("Enter Matches Played : ");
    scanf("%d",&p[count].matches);

    count++;

    printf("\nPlayer Added Successfully!\n");
}

//DISPLAYPLAYERS

void displayPlayers()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\n========== PLAYER DETAILS ==========\n");

    for(i = 0; i < count; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Jersey Number : %d\n", p[i].jerseyNo);
        printf("Player Name   : %s\n", p[i].name);
        printf("Runs          : %d\n", p[i].runs);
        printf("Wickets       : %d\n", p[i].wickets);
        printf("Matches       : %d\n", p[i].matches);
        printf("-----------------------------------\n");
    }
}

//SEARCH BY JERSEY NUMBER

void searchByJersey()
{
    int jersey, i;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\nEnter Jersey Number : ");
    scanf("%d", &jersey);

    for(i = 0; i < count; i++)
    {
        if(p[i].jerseyNo == jersey)
        {
            printf("\nPlayer Found\n");
            printf("Jersey Number : %d\n", p[i].jerseyNo);
            printf("Player Name   : %s\n", p[i].name);
            printf("Runs          : %d\n", p[i].runs);
            printf("Wickets       : %d\n", p[i].wickets);
            printf("Matches       : %d\n", p[i].matches);
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

// SERCH BY NAME

void searchByName()
{
    char name[30];
    int i;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\nEnter Player Name : ");
    scanf("%s", name);

    for(i = 0; i < count; i++)
    {
        if(strcmp(p[i].name, name) == 0)
        {
            printf("\nPlayer Found\n");
            printf("Jersey Number : %d\n", p[i].jerseyNo);
            printf("Player Name   : %s\n", p[i].name);
            printf("Runs          : %d\n", p[i].runs);
            printf("Wickets       : %d\n", p[i].wickets);
            printf("Matches       : %d\n", p[i].matches);
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

// UPDATE PLAYER

void updatePlayer()
{
    int jersey, i;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\nEnter Jersey Number to Update : ");
    scanf("%d", &jersey);

    for(i = 0; i < count; i++)
    {
        if(p[i].jerseyNo == jersey)
        {
            printf("\nEnter New Runs : ");
            scanf("%d", &p[i].runs);

            printf("Enter New Wickets : ");
            scanf("%d", &p[i].wickets);

            printf("Enter New Matches : ");
            scanf("%d", &p[i].matches);

            printf("\nPlayer Updated Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

// REMOVE PLAYER

void removePlayer()
{
    int jersey, i, j;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\nEnter Jersey Number to Remove : ");
    scanf("%d", &jersey);

    for(i = 0; i < count; i++)
    {
        if(p[i].jerseyNo == jersey)
        {
            for(j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            printf("\nPlayer Removed Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

// DISPLAY SORTTED PLAYER
void sortByRuns()
{
    int i, j;
    struct Player temp;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(p[i].runs < p[j].runs)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\n===== Players Sorted By Runs =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nJersey Number : %d", p[i].jerseyNo);
        printf("\nPlayer Name   : %s", p[i].name);
        printf("\nRuns          : %d", p[i].runs);
        printf("\nWickets       : %d", p[i].wickets);
        printf("\nMatches       : %d", p[i].matches);
        printf("\n-----------------------------");
    }
}

//SORT BY WICKETS

void sortByWickets()
{
    int i, j;
    struct Player temp;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(p[i].wickets < p[j].wickets)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\n===== Players Sorted By Wickets =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nJersey Number : %d", p[i].jerseyNo);
        printf("\nPlayer Name   : %s", p[i].name);
        printf("\nRuns          : %d", p[i].runs);
        printf("\nWickets       : %d", p[i].wickets);
        printf("\nMatches       : %d", p[i].matches);
        printf("\n-----------------------------");
    }
}

// TOP 3 PLAYERS BY RUNS

void top3Runs()
{
    int i, j, limit;
    struct Player temp;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(p[i].runs < p[j].runs)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    if(count < 3)
        limit = count;
    else
        limit = 3;

    printf("\n===== TOP %d PLAYERS BY RUNS =====\n", limit);

    for(i = 0; i < limit; i++)
    {
        printf("\nRank %d", i + 1);
        printf("\nJersey Number : %d", p[i].jerseyNo);
        printf("\nPlayer Name   : %s", p[i].name);
        printf("\nRuns          : %d", p[i].runs);
        printf("\nWickets       : %d", p[i].wickets);
        printf("\nMatches       : %d", p[i].matches);
        printf("\n-----------------------------");
    }
}



 

// TOP 3 WICKETS
void top3Wickets()
{
    int i, j, limit;
    struct Player temp;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(p[i].wickets < p[j].wickets)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    if(count < 3)
        limit = count;
    else
        limit = 3;

    printf("\n===== TOP %d PLAYERS BY WICKETS =====\n", limit);

    for(i = 0; i < limit; i++)
    {
        printf("\nRank %d", i + 1);
        printf("\nJersey Number : %d", p[i].jerseyNo);
        printf("\nPlayer Name   : %s", p[i].name);
        printf("\nRuns          : %d", p[i].runs);
        printf("\nWickets       : %d", p[i].wickets);
        printf("\nMatches       : %d", p[i].matches);
        printf("\n-----------------------------");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n\n========== PLAYER MANAGEMENT SYSTEM ==========");
        printf("\n1. Add Player");
        printf("\n2. Remove Player");
        printf("\n3. Search Player By Jersey Number");
        printf("\n4. Search Player By Name");
        printf("\n5. Update Player");
        printf("\n6. Display All Players");
        printf("\n7. Sort Players By Runs");
        printf("\n8. Sort Players By Wickets");
        printf("\n9. Top 3 Players By Runs");
        printf("\n10. Top 3 Players By Wickets");
        printf("\n0. Exit");

        printf("\n\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPlayer();
                break;

            case 2:
                removePlayer();
                break;

            case 3:
                searchByJersey();
                break;

            case 4:
                searchByName();
                break;

            case 5:
                updatePlayer();
                break;

            case 6:
                displayPlayers();
                break;

            case 7:
                sortByRuns();
                break;

            case 8:
                sortByWickets();
                break;

            case 9:
                top3Runs();
                break;

            case 10:
                top3Wickets();
                break;

            case 0:
                printf("\nThank You!");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    } while(choice != 0);

    return 0;
}

