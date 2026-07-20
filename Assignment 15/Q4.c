//Q4. Point of Sale System: Build a simple point of sale system using structures to
//represent products with attributes like name, price, and quantity. Allow users
//to add items to a cart and calculate the total cost.
#include <stdio.h>

struct Product
{
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct Product p[10];
    int n, i;
    float total = 0;

    printf("Enter Number of Products: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nProduct %d\n",i+1);

        printf("Name: ");
        scanf(" %[^\n]",p[i].name);

        printf("Price: ");
        scanf("%f",&p[i].price);

        printf("Quantity: ");
        scanf("%d",&p[i].quantity);

        total += p[i].price * p[i].quantity;
    }

    printf("\nCart Details\n");

    for(i=0;i<n;i++)
    {
        printf("%s  %.2f  %d\n",p[i].name,p[i].price,p[i].quantity);
    }

    printf("\nTotal Cost = %.2f\n",total);

    return 0;
}