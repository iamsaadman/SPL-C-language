#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TICKETS 50

typedef struct {
    char name[30];
    int age;
    char address[50];
    char destination[30];
    float price;
} Ticket;

Ticket tickets[MAX_TICKETS];
int numTickets = 0;

void addTicket() {
    if (numTickets >= MAX_TICKETS) {
        printf("Error: Maximum number of tickets reached.\n");
        return;
    }

    Ticket newTicket;
    printf("Enter name: ");
    scanf("%s", newTicket.name);
    printf("Enter age: ");
    scanf("%d", &newTicket.age);
    printf("Enter address: ");
    scanf("%s", newTicket.address);
    printf("Enter destination: ");
    scanf("%s", newTicket.destination);
    printf("Enter price: ");
    scanf("%f", &newTicket.price);

    tickets[numTickets++] = newTicket;
    printf("Ticket added successfully.\n");
}

void listTickets() {
    printf("Name\tAge\tAddress\t\tDestination\tPrice\n");
    for (int i = 0; i < numTickets; i++) {
        printf("%s\t%d\t%s\t\t%s\t\t%.2f\n", tickets[i].name, tickets[i].age, tickets[i].address, tickets[i].destination, tickets[i].price);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n");
        printf("1. Add Ticket\n");
        printf("2. List Tickets\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTicket();
                break;
            case 2:
                listTickets();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}
