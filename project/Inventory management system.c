#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 50

typedef struct
{
    int id;
    char name[50];
    int quantity;
    float price;
} Product;

typedef struct
{
    Product products[MAX_PRODUCTS];
    int num_products;
} Inventory;

// Function to add a new product to the inventory
void add_product(Inventory* inventory)
{
    Product product;
    printf("Enter the name of the product: ");
    scanf("%s", product.name);
    printf("Enter the quantity of the product: ");
    scanf("%d", &product.quantity);
    printf("Enter the price of the product: ");
    scanf("%f", &product.price);
    product.id = inventory->num_products + 1;
    inventory->products[inventory->num_products] = product;
    inventory->num_products++;
    printf("Product added to the inventory.\n");
}

// Function to remove a product from the inventory
void remove_product(Inventory* inventory)
{
    int id;
    printf("Enter the ID of the product to remove: ");
    scanf("%d", &id);
    int index = -1;
    for (int i = 0; i < inventory->num_products; i++)
    {
        if (inventory->products[i].id == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Product with ID %d not found.\n", id);
    }
    else
    {
        inventory->products[index].id = -1;
        printf("Product with ID %d removed from the inventory.\n", id);
    }
}

// Function to display all products in the inventory
void display_products(Inventory* inventory)
{
    printf("List of all products in the inventory:\n");
    for (int i = 0; i < inventory->num_products; i++)
    {
        if (inventory->products[i].id != -1)
        {
            printf("ID: %d\n", inventory->products[i].id);
            printf("Name: %s\n", inventory->products[i].name);
            printf("Quantity: %d\n", inventory->products[i].quantity);
            printf("Price: %.2f\n", inventory->products[i].price);
            printf("--------------------\n");
        }
    }
}

// Function to search for a product by name
void search_product(Inventory* inventory)
{
    char name[50];
    int found = 0;
    printf("Enter the name of the product to search for: ");
    scanf("%s", name);
    for (int i = 0; i < inventory->num_products; i++)
    {
        if (strcmp(inventory->products[i].name, name) == 0)
        {
            printf("ID: %d\n", inventory->products[i].id);
            printf("Name: %s\n", inventory->products[i].name);
            printf("Quantity: %d\n", inventory->products[i].quantity);
            printf("Price: %.2f\n", inventory->products[i].price);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Product with name %s not found.\n", name);
    }
}

int main()
{
    Inventory inventory = {0};
    int choice;
    do
    {
        printf("1. Add Product\n");
        printf("2. Remove Product\n");
        printf("3. Display Products\n");
        printf("4. Search Product\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_product(&inventory);
            break;
        case 2:
            remove_product(&inventory);
            break;
        case 3:
            display_products(&inventory);
            break;
        case 4:
            search_product(&inventory);
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    while (choice != 5);
    return 0;
}
