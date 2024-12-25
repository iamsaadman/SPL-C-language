#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SPACES 50

typedef struct
{
    int id;
    char make_model[50];
    char license_plate[10];
    char status[20];
} Car;

typedef struct
{
    Car cars[MAX_SPACES];
    int num_cars;
} ParkingLot;

// Function to add a new car to the parking lot
void add_car(ParkingLot* parking_lot)
{
    Car car;
    printf("Enter the make and model of the car: ");
    scanf("%s", car.make_model);
    printf("Enter the license plate of the car: ");
    scanf("%s", car.license_plate);
    strcpy(car.status, "Parked");
    car.id = parking_lot->num_cars + 1;
    parking_lot->cars[parking_lot->num_cars] = car;
    parking_lot->num_cars++;
    printf("Car added to the parking lot.\n");
}

// Function to remove a car from the parking lot
void remove_car(ParkingLot* parking_lot)
{
    int id;
    printf("Enter the ID of the car to remove: ");
    scanf("%d", &id);
    int index = -1;
    for (int i = 0; i < parking_lot->num_cars; i++)
    {
        if (parking_lot->cars[i].id == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Car with ID %d not found.\n", id);
    }
    else
    {
        parking_lot->cars[index].id = -1;
        strcpy(parking_lot->cars[index].status, "Removed");
        printf("Car with ID %d removed from the parking lot.\n", id);
    }
}

// Function to display all cars in the parking lot
void display_cars(ParkingLot* parking_lot)
{
    printf("List of all cars in the parking lot:\n");
    for (int i = 0; i < parking_lot->num_cars; i++)
    {
        if (parking_lot->cars[i].id != -1)
        {
            printf("ID: %d\n", parking_lot->cars[i].id);
            printf("Make and Model: %s\n", parking_lot->cars[i].make_model);
            printf("License Plate: %s\n", parking_lot->cars[i].license_plate);
            printf("Status: %s\n", parking_lot->cars[i].status);
            printf("--------------------\n");
        }
    }
}

// Function to search for a car by license plate
void search_car(ParkingLot* parking_lot)
{
    char license_plate[10];
    int found = 0;
    printf("Enter the license plate of the car to search for: ");
    scanf("%s", license_plate);
    for (int i = 0; i < parking_lot->num_cars; i++)
    {
        if (strcmp(parking_lot->cars[i].license_plate, license_plate) == 0)
        {
            printf("ID: %d\n", parking_lot->cars[i].id);
            printf("Make and Model: %s\n", parking_lot->cars[i].make_model);
            printf("License Plate: %s\n", parking_lot->cars[i].license_plate);
            printf("Status: %s\n", parking_lot->cars[i].status);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Car with license plate %s not found.\n", license_plate);
    }
}

// Function to save the parking lot data to a file
void save_data(ParkingLot* parking_lot)
{
    char filename[50];
    printf("Enter the name of the file to save the parking lot data to: ");
    scanf("%s", filename);
    FILE* file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    fprintf(file, "%d\n", parking_lot->num_cars);
    for (int i = 0; i < parking_lot->num_cars; i++)
    {
        fprintf(file, "%d\n", parking_lot->cars[i].id);
        fprintf(file, "%s\n", parking_lot->cars[i].make_model);
        fprintf(file, "%s\n", parking_lot->cars[i].license_plate);
        fprintf(file, "%s\n", parking_lot->cars[i].status);
    }
    fclose(file);
    printf("Parking lot data saved to %s.\n", filename);
}

// Function to load parking lot data from a file
void load_data(ParkingLot* parking_lot)
{
    char filename[50];
    printf("Enter the name of the file to load parking lot data from: ");
    scanf("%s", filename);
    FILE* file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    fscanf(file, "%d\n", &parking_lot->num_cars);
    for (int i = 0; i < parking_lot->num_cars; i++)
    {
        fscanf(file, "%d\n", &parking_lot->cars[i].id);
        fscanf(file, "%s\n", parking_lot->cars[i].make_model);
        fscanf(file, "%s\n", parking_lot->cars[i].license_plate);
        fscanf(file, "%s\n", parking_lot->cars[i].status);
    }
    fclose(file);
    printf("Parking lot data loaded from %s.\n", filename);
}

// Function to display the menu and get user input
int get_menu_choice()
{
    int choice;
    printf("\nMenu:\n");
    printf("1. Add a car\n");
    printf("2. Remove a car\n");
    printf("3. Display all cars\n");
    printf("4. Search for a car\n");
    printf("5. Save data to a file\n");
    printf("6. Load data from a file\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    ParkingLot parking_lot = { .num_cars = 0 };
    int choice;
    do
    {
        choice = get_menu_choice();
        switch (choice)
        {
        case 1:
            add_car(&parking_lot);
            break;
        case 2:
            remove_car(&parking_lot);
            break;
        case 3:
            display_cars(&parking_lot);
            break;
        case 4:
            search_car(&parking_lot);
            break;
        case 5:
            save_data(&parking_lot);
            break;
        case 6:
            load_data(&parking_lot);
            break;
        case 7:
            printf("Exiting.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    while (choice != 7);
    return 0;
}
