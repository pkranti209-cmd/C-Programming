//Q5. Movie Database: Create a program that uses structures to manage a movie
//database with details like title, director, release year, and genre. Allow users
//to add, search for, and update movie records.

#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main()
{
    struct Movie m[10];
    int n, i, choice;
    char search[50];

    printf("Enter Number of Movies: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nMovie %d\n",i+1);

        printf("Title: ");
        scanf(" %[^\n]",m[i].title);

        printf("Director: ");
        scanf(" %[^\n]",m[i].director);

        printf("Release Year: ");
        scanf("%d",&m[i].year);

        printf("Genre: ");
        scanf(" %[^\n]",m[i].genre);
    }

    printf("\n1.Search Movie\n2.Update Movie Year\nEnter Choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter Movie Title: ");
        scanf(" %[^\n]",search);

        for(i=0;i<n;i++)
        {
            if(strcmp(search,m[i].title)==0)
            {
                printf("\nMovie Found\n");
                printf("Title : %s\n",m[i].title);
                printf("Director : %s\n",m[i].director);
                printf("Year : %d\n",m[i].year);
                printf("Genre : %s\n",m[i].genre);
            }
        }
    }

    else if(choice==2)
    {
        printf("Enter Movie Title: ");
        scanf(" %[^\n]",search);

        for(i=0;i<n;i++)
        {
            if(strcmp(search,m[i].title)==0)
            {
                printf("Enter New Release Year: ");
                scanf("%d",&m[i].year);

                printf("\nUpdated Successfully\n");
                printf("Title : %s\n",m[i].title);
                printf("Director : %s\n",m[i].director);
                printf("Year : %d\n",m[i].year);
                printf("Genre : %s\n",m[i].genre);
            }
        }
    }

    return 0;
}