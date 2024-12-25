#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 50

typedef struct
{
    int id;
    char name[50];
    char email[50];
} Customer;

typedef struct
{
    Customer customers[MAX_CUSTOMERS];
    int num_customers;
} CustomerDB;

// Function to add a new customer to the database
void add_customer(CustomerDB* db)
{
    if (db->num_customers >= MAX_CUSTOMERS)
    {
        printf("Database is full.\n");
        return;
    }
    Customer customer;
    printf("Enter the name of the customer: ");
    scanf("%s", customer.name);
    printf("Enter the email of the customer: ");
    scanf("%s", customer.email);
    customer.id = db->num_customers + 1;
    db->customers[db->num_customers] = customer;
    db->num_customers++;
    printf("Customer added to the database.\n");
}

// Function to remove a customer from the database
void remove_customer(CustomerDB* db)
{
    int id;
    printf("Enter the ID of the customer to remove: ");
    scanf("%d", &id);
    int index = -1;
    for (int i = 0; i < db->num_customers; i++)
    {
        if (db->customers[i].id == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Customer with ID %d not found.\n", id);
    }
    else
    {
        db->customers[index].id = -1;
        printf("Customer with ID %d removed from the database.\n", id);
    }
}

// Function to display all customers in the database
void display_customers(CustomerDB* db)
{
    printf("List of all customers in the database:\n");
    for (int i = 0; i < db->num_customers; i++)
    {
        if (db->customers[i].id != -1)
        {
            printf("ID: %d\n", db->customers[i].id);
            printf("Name: %s\n", db->customers[i].name);
            printf("Email: %s\n", db->customers[i].email);
            printf("--------------------\n");
        }
    }
}

// Function to search for a customer by name
void search_customer(CustomerDB* db)
{
    char name[50];
    int found = 0;
    printf("Enter the name of the customer to search for: ");
    scanf("%s", name);
    for (int i = 0; i < db->num_customers; i++)
    {
        if (strcmp(db->customers[i].name, name) == 0)
        {
            printf("ID: %d\n", db->customers[i].id);
            printf("Name: %s\n", db->customers[i].name);
            printf("Email: %s\n", db->customers[i].email);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Customer with name %s not found.\n", name);
    }
}

// Function to save the database to a file
void save_database(CustomerDB* db, char* filename)
{
    FILE* fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    fprintf(fp, "%d\n", db->num_customers);
    for (int i = 0; i < db->num_customers; i++)
    {
        if (db->customers[i].id != -1)
        {
            fprintf(fp, "%d %s %s\n", db->customers[i].id, db->customers[i].name, db->customers[i].email);
        }
    }
    fclose(fp);
    printf("Database saved to file: %s\n", filename);
}

// Function to load the database from a file
void load_database(CustomerDB* db, char* filename)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    int num_customers;
    fscanf(fp, "%d", &num_customers);
    db->num_customers = 0;
    for (int i = 0; i < num_customers; i++)
    {
        Customer customer;
        fscanf(fp, "%d %s %s", &customer.id, customer.name, customer.email);
        db->customers[db->num_customers] = customer;
        db->num_customers++;
    }
    fclose(fp);
    printf("Database loaded from file: %s\n", filename);
}

int main()
{
    CustomerDB db = {0};
    int choice;
    char filename[50];
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add customer\n");
        printf("2. Remove customer\n");
        printf("3. Display all customers\n");
        printf("4. Search for a customer by name\n");
        printf("5. Save database to file\n");
        printf("6. Load database from file\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_customer(&db);
            break;
        case 2:
            remove_customer(&db);
            break;
        case 3:
            display_customers(&db);
            break;
        case 4:
            search_customer(&db);
            break;
        case 5:
            printf("Enter the filename to save the database to: ");
            scanf("%s", filename);
            save_database(&db, filename);
            break;
        case 6:
            printf("Enter the filename to load the database from: ");
            scanf("%s", filename);
            load_database(&db, filename);
            break;
        case 7:
            printf("Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    return 0;
}
