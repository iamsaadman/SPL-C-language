#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[30];
    int age;
    char address[50];
    float gpa;
} Student;

Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("Error: Maximum number of students reached.\n");
        return;
    }

    Student newStudent;
    printf("Enter name: ");
    scanf("%s", newStudent.name);
    printf("Enter age: ");
    scanf("%d", &newStudent.age);
    printf("Enter address: ");
    scanf("%s", newStudent.address);
    printf("Enter GPA: ");
    scanf("%f", &newStudent.gpa);

    students[numStudents++] = newStudent;
    printf("Student added successfully.\n");
}

void listStudents() {
    printf("Name\tAge\tAddress\t\tGPA\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\t%d\t%s\t\t%.2f\n", students[i].name, students[i].age, students[i].address, students[i].gpa);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                listStudents();
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
