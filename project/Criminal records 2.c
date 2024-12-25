#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for criminal information
typedef struct
{
    char name[50];
    char crime[100];
    int age;
    int sentence_years;
    char status[20];
} criminal;

// Define the function for adding a criminal to the database
void add_criminal(criminal* criminals, int* num_criminals)
{
    printf("Enter the name of the criminal: ");
    scanf("%s", criminals[*num_criminals].name);
    printf("Enter the crime committed: ");
    scanf("%s", criminals[*num_criminals].crime);
    printf("Enter the age of the criminal: ");
    scanf("%d", &criminals[*num_criminals].age);
    printf("Enter the number of years sentenced: ");
    scanf("%d", &criminals[*num_criminals].sentence_years);
    printf("Enter the status of the criminal (arrested, convicted, released): ");
    scanf("%s", criminals[*num_criminals].status);
    *num_criminals += 1;
    printf("Criminal added to the database.\n");
}

// Define the function for displaying all criminals in the database
void display_criminals(criminal* criminals, int num_criminals)
{
    printf("List of all criminals in the database:\n");
    for (int i = 0; i < num_criminals; i++)
    {
        printf("Name: %s\n", criminals[i].name);
        printf("Crime: %s\n", criminals[i].crime);
        printf("Age: %d\n", criminals[i].age);
        printf("Sentence Years: %d\n", criminals[i].sentence_years);
        printf("Status: %s\n", criminals[i].status);
        printf("--------------------\n");
    }
}

// Define the function for searching for a criminal by name
void search_criminal(criminal* criminals, int num_criminals)
{
    char name[50];
    int found = 0;
    printf("Enter the name of the criminal to search for: ");
    scanf("%s", name);
    for (int i = 0; i < num_criminals; i++)
    {
        if (strcmp(criminals[i].name, name) == 0)
        {
            printf("Name: %s\n", criminals[i].name);
            printf("Crime: %s\n", criminals[i].crime);
            printf("Age: %d\n", criminals[i].age);
            printf("Sentence Years: %d\n", criminals[i].sentence_years);
            printf("Status: %s\n", criminals[i].status);
            printf("--------------------\n");
            found = 1;
        }
    }
    if (!found)
    {
        printf("Criminal with name %s not found.\n", name);
    }
}

// Define the main function
int main()
{
    // Initialize the array of criminals and the number of criminals
    criminal criminals[100];
    int num_criminals = 0;
    int choice;

    // Display the menu of options
    while (1)
    {
        printf("\nCriminal Database Management System\n");
        printf("1. Add a criminal to the database\n");
        printf("2. Display all criminals in the database\n");
        printf("3. Search for a criminal by name\n");
        printf("4. Exit the system\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected action
        switch(choice)
        {
        case 1:
            add_criminal(criminals, &num_criminals);
            break;
        case 2:
            display_criminals(criminals, num_criminals);
            break;
        case 3:
            search_criminal(criminals, num_criminals);
            break;
        case 4:
            printf("Exiting the system...\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
