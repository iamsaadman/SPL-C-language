#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

struct Record
{
    int id;
    char name[50];
    char address[50];
    char phone[15];
};

struct Database
{
    struct Record records[MAX_RECORDS];
    int num_records;
};

void print_menu()
{
    printf("Elementary Database Management System\n");
    printf("1. Add record\n");
    printf("2. Display all records\n");
    printf("3. Search for a record\n");
    printf("4. Update a record\n");
    printf("5. Delete a record\n");
    printf("6. Quit\n");
    printf("\nEnter your choice: ");
}

void add_record(struct Database *db)
{
    if (db->num_records >= MAX_RECORDS)
    {
        printf("Error: Maximum number of records reached\n");
        return;
    }

    struct Record record;
    printf("Enter the record ID: ");
    scanf("%d", &record.id);
    printf("Enter the record name: ");
    scanf("%s", record.name);
    printf("Enter the record address: ");
    scanf("%s", record.address);
    printf("Enter the record phone number: ");
    scanf("%s", record.phone);

    db->records[db->num_records++] = record;
    printf("Record added successfully\n");
}

void display_all_records(struct Database *db)
{
    if (db->num_records == 0)
    {
        printf("No records in the database\n");
        return;
    }

    printf("List of records:\n");
    for (int i = 0; i < db->num_records; i++)
    {
        printf("ID: %d, Name: %s, Address: %s, Phone: %s\n",
               db->records[i].id, db->records[i].name,
               db->records[i].address, db->records[i].phone);
    }
}

void search_record(struct Database *db)
{
    int id;
    printf("Enter the ID of the record to search for: ");
    scanf("%d", &id);

    for (int i = 0; i < db->num_records; i++)
    {
        if (db->records[i].id == id)
        {
            printf("ID: %d, Name: %s, Address: %s, Phone: %s\n",
                   db->records[i].id, db->records[i].name,
                   db->records[i].address, db->records[i].phone);
            return;
        }
    }

    printf("Record not found\n");
}

void update_record(struct Database *db)
{
    int id;
    printf("Enter the ID of the record to update: ");
    scanf("%d", &id);

    for (int i = 0; i < db->num_records; i++)
    {
        if (db->records[i].id == id)
        {
            printf("Enter the updated name: ");
            scanf("%s", db->records[i].name);
            printf("Enter the updated address: ");
            scanf("%s", db->records[i].address);
            printf("Enter the updated phone number: ");
            scanf("%s", db->records[i].phone);
            printf("Record updated successfully\n");
            return;
        }
    }

    printf("Record not found\n");
}

void delete_record(struct Database *db)
{
    int id;
    printf("Enter the ID of the record to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < db->num_records; i++)
    {
        if (db->records[i].id == id)
        {
            for (int j = i; j < db->num_records - 1; j++)
            {
                db->records[j] = db->records[j + 1];
            }
            db->num_records--;
            printf("Record deleted successfully\n");
            return;
        }
    }
    printf("Record not found\n");
}

int main()
{
    struct Database db = { .num_records = 0 };
    int choice;
    do
    {
        print_menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_record(&db);
            break;
        case 2:
            display_all_records(&db);
            break;
        case 3:
            search_record(&db);
            break;
        case 4:
            update_record(&db);
            break;
        case 5:
            delete_record(&db);
            break;
        case 6:
            printf("Quitting program\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    while (choice != 6);

    return 0;
}
