#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tour {
    char name[50];
    char destination[50];
    char date[20];
    int price;
};

int main() {
    struct Tour tour[50];
    int option, i, n = 0, total_price = 0;
    char name[50], destination[50], date[20];

    while (1) {
        printf("\n");
        printf("1. Add a new tour\n");
        printf("2. Update a tour\n");
        printf("3. Remove a tour\n");
        printf("4. Display all tours\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter tour name: ");
                scanf("%s", &name);
                printf("Enter tour destination: ");
                scanf("%s", &destination);
                printf("Enter tour date (dd/mm/yyyy): ");
                scanf("%s", &date);
                printf("Enter tour price: ");
                scanf("%d", &tour[n].price);
                strcpy(tour[n].name, name);
                strcpy(tour[n].destination, destination);
                strcpy(tour[n].date, date);
                printf("\nTour added successfully.\n");
                n++;
                break;
            case 2:
                printf("\nEnter tour name to update: ");
                scanf("%s", &name);
                for (i = 0; i < n; i++) {
                    if (strcmp(tour[i].name, name) == 0) {
                        printf("\nEnter new tour name: ");
                        scanf("%s", &name);
                        printf("Enter new tour destination: ");
                        scanf("%s", &destination);
                        printf("Enter new tour date (dd/mm/yyyy): ");
                        scanf("%s", &date);
                        printf("Enter new tour price: ");
                        scanf("%d", &tour[i].price);
                        strcpy(tour[i].name, name);
                        strcpy(tour[i].destination, destination);
                        strcpy(tour[i].date, date);
                        printf("\nTour updated successfully.\n");
                        break;
                    }
                }
                if (i == n) {
                    printf("Tour not found.\n");
                }
                break;
            case 3:
                printf("\nEnter tour name to remove: ");
                scanf("%s", &name);
                for (i = 0; i < n; i++) {
                    if (strcmp(tour[i].name, name) == 0) {
                        for (int j = i; j < n-1; j++) {
                            tour[j] = tour[j+1];
                        }
                        printf("\nTour removed successfully.\n");
                        n--;
                        break;
                    }
                }
                if (i == n) {
                    printf("Tour not found.\n");
                }
                break;
            case 4:
                printf("\nName\t\tDestination\tDate\t\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%s\t\t%s\t\t%s\t%d\n", tour[i].name, tour[i].destination, tour[i].date, tour[i].price);
                    total_price += tour[i].price;
                }
                printf("\nTotal revenue: %d\n", total_price);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice. Try again.\n");
                break;
        }
    }

    return 0;
}
