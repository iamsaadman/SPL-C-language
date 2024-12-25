#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 1000
#define MAX_NAME_LENGTH 30

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char address[MAX_NAME_LENGTH];
} Record;

Record records[MAX_RECORDS];
int numRecords = 0;

void addRecord() {
    if (numRecords >= MAX_RECORDS) {
        printf("Error: Maximum number of records reached.\n");
        return;
    }

    Record newRecord;
    printf("Enter name: ");
    scanf("%s", newRecord.name);
    printf("Enter age: ");
    scanf("%d", &newRecord.age);
    printf("Enter address: ");
    scanf("%s", newRecord.address);

    records[numRecords++] = newRecord;
    printf("Record added successfully.\n");
}

void listRecords() {
    printf("Name\tAge\tAddress\n");
    for (int i = 0; i < numRecords; i++) {
        printf("%s\t%d\t%s\n", records[i].name, records[i].age, records[i].address);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n");
        printf("1. Add Record\n");
        printf("2. List Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                listRecords();
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
