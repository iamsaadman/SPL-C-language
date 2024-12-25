#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char name[50];
    char type[20];
    int price;
    int availability;
};

int main() {
    struct Car car[50];
    int option, i, n = 0, total_price = 0;
    char name[50], type[20];

    while (1) {
        printf("\n");
        printf("1. Add a new car\n");
        printf("2. Update a car\n");
        printf("3. Rent a car\n");
        printf("4. Display all cars\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter car name: ");
                scanf("%s", &name);
                printf("Enter car type: ");
                scanf("%s", &type);
                printf("Enter car price per day: ");
                scanf("%d", &car[n].price);
                strcpy(car[n].name, name);
                strcpy(car[n].type, type);
                car[n].availability = 1;
                printf("\nCar added successfully.\n");
                n++;
                break;
            case 2:
                printf("\nEnter car name to update: ");
                scanf("%s", &name);
                for (i = 0; i < n; i++) {
                    if (strcmp(car[i].name, name) == 0) {
                        printf("\nEnter new car name: ");
                        scanf("%s", &name);
                        printf("Enter new car type: ");
                        scanf("%s", &type);
                        printf("Enter new car price per day: ");
                        scanf("%d", &car[i].price);
                        strcpy(car[i].name, name);
                        strcpy(car[i].type, type);
                        printf("\nCar updated successfully.\n");
                        break;
                    }
                }
                if (i == n) {
                    printf("Car not found.\n");
                }
                break;
            case 3:
                printf("\nEnter car name to rent: ");
                scanf("%s", &name);
                for (i = 0; i < n; i++) {
                    if (strcmp(car[i].name, name) == 0) {
                        if (car[i].availability == 1) {
                            car[i].availability = 0;
                            printf("\nCar rented successfully.\n");
                            break;
                        } else {
                            printf("\nCar not available for rent.\n");
                            break;
                        }
                    }
                }
                if (i == n) {
                    printf("Car not found.\n");
                }
                break;
            case 4:
                printf("\nName\t\tType\t\tPrice\tAvailability\n");
                for (i = 0; i < n; i++) {
                    printf("%s\t\t%s\t\t%d\t", car[i].name, car[i].type, car[i].price);
                    if (car[i].availability == 1) {
                        printf("Yes\n");
                    } else {
                        printf("No\n");
                    }
                    total_price += car[i].price;
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
