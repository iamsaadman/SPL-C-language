#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 50

typedef struct {
    int id;
    char name[50];
    char position[50];
    float salary;
} Employee;

typedef struct {
    Employee employees[MAX_EMPLOYEES];
    int num_employees;
} Payroll;

// Function to add a new employee to the payroll
void add_employee(Payroll* payroll) {
    Employee employee;
    printf("Enter the name of the employee: ");
    scanf("%s", employee.name);
    printf("Enter the position of the employee: ");
    scanf("%s", employee.position);
    printf("Enter the salary of the employee: ");
    scanf("%f", &employee.salary);
    employee.id = payroll->num_employees + 1;
    payroll->employees[payroll->num_employees] = employee;
    payroll->num_employees++;
    printf("Employee added to the payroll.\n");
}

// Function to remove an employee from the payroll
void remove_employee(Payroll* payroll) {
    int id;
    printf("Enter the ID of the employee to remove: ");
    scanf("%d", &id);
    int index = -1;
    for (int i = 0; i < payroll->num_employees; i++) {
        if (payroll->employees[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Employee with ID %d not found.\n", id);
    } else {
        payroll->employees[index].id = -1;
        printf("Employee with ID %d removed from the payroll.\n", id);
    }
}

// Function to display all employees in the payroll
void display_employees(Payroll* payroll) {
    printf("List of all employees in the payroll:\n");
    for (int i = 0; i < payroll->num_employees; i++) {
        if (payroll->employees[i].id != -1) {
            printf("ID: %d\n", payroll->employees[i].id);
            printf("Name: %s\n", payroll->employees[i].name);
            printf("Position: %s\n", payroll->employees[i].position);
            printf("Salary: %.2f\n", payroll->employees[i].salary);
            printf("--------------------\n");
        }
    }
}

// Function to search for an employee by name
void search_employee(Payroll* payroll) {
    char name[50];
    int found = 0;
    printf("Enter the name of the employee to search for: ");
    scanf("%s", name);
    for (int i = 0; i < payroll->num_employees; i++) {
        if (strcmp(payroll->employees[i].name, name) == 0) {
            printf("ID: %d\n", payroll->employees[i].id);
            printf("Name: %s\n", payroll->employees[i].name);
            printf("Position: %s\n", payroll->employees[i].position);
            printf("Salary: %.2f\n", payroll->employees[i].salary);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with name %s not found.\n", name);
    }
}

int main() {
    Payroll payroll = {0};
    int choice;
    do {
        printf("1. Add Employee\n");
        printf("2. Remove Employee\n");
        printf("3. Display All Employees\n");
    printf("4. Search for an Employee\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            add_employee(&payroll);
            break;
        case 2:
            remove_employee(&payroll);
            break;
        case 3:
            display_employees(&payroll);
            break;
        case 4:
            search_employee(&payroll);
            break;
        case 5:
            printf("Exiting the program...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
} while (choice != 5);
return 0;

