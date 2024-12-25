#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for storing contact information
typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

// Function to add a new contact to the address book
void addContact(Contact addressBook[], int *numContacts) {
    Contact newContact;
    printf("Enter name: ");
    scanf("%s", newContact.name);
    printf("Enter phone number: ");
    scanf("%s", newContact.phone);
    printf("Enter email address: ");
    scanf("%s", newContact.email);
    addressBook[*numContacts] = newContact;
    (*numContacts)++;
    printf("Contact added successfully!\n");
}

// Function to search for a contact in the address book by name
void searchContact(Contact addressBook[], int numContacts) {
    char searchName[50];
    printf("Enter name to search for: ");
    scanf("%s", searchName);
    int found = 0;
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(addressBook[i].name, searchName) == 0) {
            printf("Name: %s\n", addressBook[i].name);
            printf("Phone: %s\n", addressBook[i].phone);
            printf("Email: %s\n", addressBook[i].email);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found!\n");
    }
}

// Function to display all contacts in the address book
void displayContacts(Contact addressBook[], int numContacts) {
    if (numContacts == 0) {
        printf("Address book is empty!\n");
        return;
    }
    printf("Address Book:\n");
    printf("---------------\n");
    for (int i = 0; i < numContacts; i++) {
        printf("Name: %s\n", addressBook[i].name);
        printf("Phone: %s\n", addressBook[i].phone);
        printf("Email: %s\n", addressBook[i].email);
        printf("---------------\n");
    }
}

int main() {
    Contact addressBook[100];
    int numContacts = 0;
    int choice;
    do {
        printf("\nAddress Book\n");
        printf("------------\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Display All Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addContact(addressBook, &numContacts);
                break;
            case 2:
                searchContact(addressBook, numContacts);
                break;
            case 3:
                displayContacts(addressBook, numContacts);
                break;
            case 4:
                printf("Exiting Address Book. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);
    return 0;
}
