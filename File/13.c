#include <stdio.h>

#define MAX_PEOPLE 100

struct Person {
    char first_name[50];
    char last_name[50];
    int age;
    char street_address[100];
    char city[50];
    char state[50];
};

int main() {
    struct Person people[MAX_PEOPLE];
    int num_people;

    printf("Enter the number of people: ");
    scanf("%d", &num_people);

    for (int i = 0; i < num_people; i++) {
        printf("Enter data for person %d:\n", i+1);
        printf("First Name: ");
        scanf("%s", people[i].first_name);
        printf("Last Name: ");
        scanf("%s", people[i].last_name);
        printf("Age: ");
        scanf("%d", &people[i].age);
        printf("Street Address: ");
        scanf("%s", people[i].street_address);
        printf("City: ");
        scanf("%s", people[i].city);
        printf("State: ");
        scanf("%s", people[i].state);
        printf("\n");
    }

    FILE *file = fopen("people.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    for (int i = 0; i < num_people; i++) {
        fprintf(file, "%s,%s,%d,%s,%s,%s\n", people[i].first_name, people[i].last_name, people[i].age, people[i].street_address, people[i].city, people[i].state);
    }

    fclose(file);

    file = fopen("people.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Data from file:\n");

    for (int i = 0; i < num_people; i++) {
        fscanf(file, "%[^,],%[^,],%d,%[^,],%[^,],%s\n", people[i].first_name, people[i].last_name, &people[i].age, people[i].street_address, people[i].city, people[i].state);
        printf("Person %d:\n", i+1);
        printf("First Name: %s\n", people[i].first_name);
        printf("Last Name: %s\n", people[i].last_name);
        printf("Age: %d\n", people[i].age);
        printf("Street Address: %s\n", people[i].street_address);
        printf("City: %s\n", people[i].city);
        printf("State: %s\n", people[i].state);
        printf("\n");
    }

    fclose(file);

    return 0;
}
