#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct
{
    char name[50];
    int id;
    float price;
    int quantity;
} product;

void add_product(product products[], int *num_products)
{
    char name[50];
    float price;
    int quantity;

    printf("Enter the name of the product: ");
    scanf("%s", name);

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    printf("Enter the quantity of the product: ");
    scanf("%d", &quantity);

    product new_product;
    strcpy(new_product.name, name);
    new_product.id = *num_products + 1;
    new_product.price = price;
    new_product.quantity = quantity;

    products[*num_products] = new_product;
    *num_products += 1;

    printf("Product added successfully!\n");
}

void display_products(product products[], int num_products)
{
    printf("ID\tName\t\tPrice\tQuantity\n");
    for (int i = 0; i < num_products; i++)
    {
        printf("%d\t%s\t\t%.2f\t%d\n", products[i].id, products[i].name, products[i].price, products[i].quantity);
    }
}

void save_products(product products[], int num_products)
{
    FILE *fp = fopen("products.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to open products file for writing.\n");
        return;
    }

    for (int i = 0; i < num_products; i++)
    {
        fprintf(fp, "%d %s %.2f %d\n", products[i].id, products[i].name, products[i].price, products[i].quantity);
    }

    fclose(fp);
    printf("Products saved to file.\n");
}

int load_products(product products[])
{
    FILE *fp = fopen("products.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open products file for reading.\n");
        return 0;
    }

    int num_products = 0;
    while (fscanf(fp, "%d %[^\n] %f %d", &products[num_products].id, products[num_products].name, &products[num_products].price, &products[num_products].quantity) != EOF)
    {
        num_products++;
    }

    fclose(fp);
    printf("%d products loaded from file.\n", num_products);
    return num_products;
}

int main()
{
    product products[MAX_PRODUCTS];
    int num_products = 0;

    num_products = load_products(products);

    int choice;
    do
    {
        printf("\nShopping Mall Database\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Save Products to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_product(products, &num_products);
            break;
        case 2:
            display_products(products, num_products);
            break;
        case 3:
            save_products(products, num_products);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    while (choice != 4);
    printf("Thank you for using the Shopping Mall Database.\n");
    return 0;
}
