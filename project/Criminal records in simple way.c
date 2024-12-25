#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for criminal information
typedef struct {
    char name[50];
    char crime[100];
    int age;
    int sentence_years;
} criminal;

// Define the function for adding a criminal to the system
void add_criminal(criminal* criminals, int* num_criminals) {
    printf("Enter the name of the criminal: ");
    scanf("%s", criminals[*num_criminals].name);
    printf("Enter the crime committed: ");
    scanf("%s", criminals[*num_criminals].crime);
    printf("Enter the age of the criminal: ");
    scanf("%d", &criminals[*num_criminals].age);
    printf("Enter the number of years sentenced: ");
    scanf("%d", &criminals[*num_criminals].sentence_years);
    *num_criminals += 1;
    printf("Criminal added to the system.\n");
}

// Define the function for displaying all criminals in the system
void display_criminals(criminal* criminals, int num_criminals) {
    printf("List of all criminals in the system:\n");
    for (int i = 0; i < num_criminals; i++) {
        printf("Name: %s\n", criminals[i].name);
        printf("Crime: %s\n", criminals[i].crime);
        printf("Age: %d\n", criminals[i].age);
        printf("Sentence Years: %d\n", criminals[i].sentence_years);
    }
}

// Define the main function
int main() {
    // Initialize the array of criminals and the number of criminals
    criminal criminals[100];
    int num_criminals = 0;
    int choice;

    // Display the menu of options
    while (1) {
        printf("\nCriminal Management System\n");
        printf("1. Add a criminal to the system\n");
        printf("2. Display all criminals in the system\n");
        printf("3. Exit the system\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected action
        switch(choice) {
            case 1:
                add_criminal(criminals, &num_criminals);
                break;
            case 2:
                display_criminals(criminals, num_criminals);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }

    return 0;
}
