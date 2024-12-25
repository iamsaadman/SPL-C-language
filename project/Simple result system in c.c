#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student student[50];
    int option, i, n = 0, roll;
    char name[50];

    while (1) {
        printf("\n");
        printf("1. Add a new student\n");
        printf("2. Update a student's details\n");
        printf("3. Delete a student\n");
        printf("4. Display all students\n");
        printf("5. Search for a student by roll number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter student name: ");
                scanf("%s", &name);
                printf("Enter student roll number: ");
                scanf("%d", &roll);
                printf("Enter student marks: ");
                scanf("%f", &student[n].marks);
                strcpy(student[n].name, name);
                student[n].roll = roll;
                printf("\nStudent added successfully.\n");
                n++;
                break;
            case 2:
                printf("\nEnter roll number to update: ");
                scanf("%d", &roll);
                for (i = 0; i < n; i++) {
                    if (student[i].roll == roll) {
                        printf("\nEnter new student name: ");
                        scanf("%s", &name);
                        printf("Enter new student marks: ");
                        scanf("%f", &student[i].marks);
                        strcpy(student[i].name, name);
                        printf("\nStudent updated successfully.\n");
                        break;
                    }
                }
                if (i == n) {
                    printf("Student not found.\n");
                }
                break;
            case 3:
                printf("\nEnter roll number to delete: ");
                scanf("%d", &roll);
                for (i = 0; i < n; i++) {
                    if (student[i].roll == roll) {
                        for (int j = i; j < n - 1; j++) {
                            student[j] = student[j + 1];
                        }
                        n--;
                        printf("\nStudent deleted successfully.\n");
                        break;
                    }
                }
                if (i == n) {
                    printf("Student not found.\n");
                }
                break;
            case 4:
                printf("\nAll students:\n");
                printf("Roll No.\tName\t\tMarks\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t\t%s\t\t%.2f\n", student[i].roll, student[i].name, student[i].marks);
                }
                break;
            case 5:
                printf("\nEnter roll number to search: ");
                scanf("%d", &roll);
                for (i = 0; i < n; i++) {
                    if (student[i].roll == roll) {
                        printf("\nStudent found:\n");
                        printf("Roll No.\tName\t\tMarks\n");
                        printf("%d\t\t%s\t\t%.2f\n", student[i].roll, student[i].name, student[i].marks);
                        break;
                    }
                }
                if (i == n) {
                    printf("Student not found.\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}
