#include <stdio.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
    char department[MAX_NAME_LENGTH];
    char position[MAX_NAME_LENGTH];
    int salary;
    int student_id;
    char course[MAX_NAME_LENGTH];
} Person;

int main() {
    int num_people;
    printf("Enter the number of people to store information for: ");
    scanf("%d", &num_people);

    Person people[num_people];

    for (int i = 0; i < num_people; i++) {
        printf("\nEnter information for person %d:\n", i+1);

        printf("Name: ");
        scanf("%s", people[i].name);

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("Gender (M/F/O): ");
        scanf(" %c", &people[i].gender);

        printf("Department (student/teacher/staff): ");
        scanf("%s", people[i].department);

        if (strcmp(people[i].department, "student") == 0) {
            printf("Student ID: ");
            scanf("%d", &people[i].student_id);

            printf("Course: ");
            scanf("%s", people[i].course);
        } else {
            printf("Position: ");
            scanf("%s", people[i].position);

            printf("Salary: ");
            scanf("%d", &people[i].salary);
        }
    }

    // Print out information for all people
    printf("\nInformation for all people:\n");
    for (int i = 0; i < num_people; i++) {
        printf("\nPerson %d:\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Gender: %c\n", people[i].gender);
        printf("Department: %s\n", people[i].department);

        if (strcmp(people[i].department, "student") == 0) {
            printf("Student ID: %d\n", people[i].student_id);
            printf("Course: %s\n", people[i].course);
        } else {
            printf("Position: %s\n", people[i].position);
            printf("Salary: %d\n", people[i].salary);
        }
    }

    return 0;
}
