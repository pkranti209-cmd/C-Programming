//Structure
//Q1. Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them.
#include <stdio.h>

struct Book
{
    char bookname[50];
    int id;
    char author[50];
    float price;
};

void main()
{
    struct Book b;

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bookname);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Book Name : %s\n", b.bookname);
    printf("Book ID   : %d\n", b.id);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
    

    
}