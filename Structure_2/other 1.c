#include <stdio.h>

// Define a structure to represent an employee
struct employee {
    char name[50];
    double salary;
    int hours_worked;
};

int main() {
    // Define an array of 10 employees
    struct employee employees[10];

    // Get input for each employee's name, salary, and hours worked
    for (int i = 0; i < 10; i++) {
        printf("Enter the name of employee %d: ", i+1);
        scanf("%s", employees[i].name);
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%lf", &employees[i].salary);
        printf("Enter the number of hours worked by employee %d: ", i+1);
        scanf("%d", &employees[i].hours_worked);
    }

    // Increase the salary based on the number of hours worked
    for (int i = 0; i < 10; i++) {
        if (employees[i].hours_worked >= 12) {
            employees[i].salary += 150.0;
        } else if (employees[i].hours_worked >= 10) {
            employees[i].salary += 100.0;
        } else if (employees[i].hours_worked >= 8) {
            employees[i].salary += 50.0;
        }
    }

    // Print the name and final salary of each employee
    printf("\nName\t\tSalary\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\t\t$%.2lf\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
