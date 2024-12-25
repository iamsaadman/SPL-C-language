#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the employee structure
struct Employee
{
    char name[50];
    int id;
    char position[50];
    double salary;
};

int main()
{
    FILE *file;
    int num_employees, choice, id, i, j;
    double salary;
    struct Employee *employees, emp;

    // Open the file
    file = fopen("employees.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened\n");
        exit(1);
    }

    // Count the number of employees in the file
    num_employees = 0;

    while (fscanf(file, "%s %d %s %lf", emp.name, &emp.id, emp.position, &emp.salary) != EOF)
    {
        num_employees++;
    }

    // Allocate memory for the employees array
    employees = (struct Employee*) malloc(num_employees * sizeof(struct Employee));

    // Reset file position to the beginning of the file
    fseek(file, 0, SEEK_SET);

    // Read employee data from file and store in the employees array
    i = 0;

    while (fscanf(file, "%s %d %s %lf", emp.name, &emp.id, emp.position, &emp.salary) != EOF)
    {
        employees[i++] = emp;
    }

    // Close the file
    fclose(file);

    // Display a menu and perform user-selected operations
    do
    {
        printf("\n1. Display employee information\n");
        printf("2. Sort employees by salary\n");
        printf("3. Sort employees by position\n");
        printf("4. Add a new employee\n");
        printf("5. Update an existing employee's information\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Display employee information
            printf("\nEmployee information:\n");
            for (i = 0; i < num_employees; i++)
            {
                printf("Name: %s, ID: %d, Position: %s, Salary: $%.2lf\n", employees[i].name, employees[i].id, employees[i].position, employees[i].salary);
            }
            break;

        case 2:
            // Sort employees by salary
            for (i = 0; i < num_employees - 1; i++)
            {
                for (j = i + 1; j < num_employees; j++)
                {
                    if (employees[i].salary < employees[j].salary)
                    {
                        emp = employees[i];
                        employees[i] = employees[j];
                        employees[j] = emp;
                    }
                }
            }
            printf("\nEmployees sorted by salary:\n");
            for (i = 0; i < num_employees; i++)
            {
                printf("Name: %s, ID: %d, Position: %s, Salary: $%.2lf\n", employees[i].name, employees[i].id, employees[i].position, employees[i].salary);
            }
            break;

        case 3:
            // Sort employees by position
            for (i = 0; i < num_employees - 1; i++)
            {
                for (j = i + 1; j < num_employees; j++)
                {
                    if (strcmp(employees[i].position, employees[j].position) > 0)
                    {
                        emp = employees[i];
                        employees[i] = employees[j];
                        employees[j] = emp;
                    }
                }
            }
            printf("\nEmployees sorted by position:\n");
            for (i = 0; i < num_employees; i++)
            {
                printf("Name: %s, ID: %d, Position: %s, Salary: $%.2lf\n", employees[i].name, employees[i].id, employees[i].position, employees[i].salary);
            }
            break;
        case 4:
            // Add a new employee
            printf("\nEnter employee information:\n");
            printf("Name: ");
            scanf("%s", emp.name);
            printf("ID: ");
            scanf("%d", &emp.id);
            printf("Position: ");
            scanf("%s", emp.position);
            printf("Salary: ");
            scanf("%lf", &emp.salary);

            // Increase the size of the employees array
            num_employees++;
            employees = (struct Employee*) realloc(employees, num_employees * sizeof(struct Employee));

            // Add the new employee to the end of the array
            employees[num_employees - 1] = emp;

            printf("\nEmployee added successfully.\n");
            break;

        case 5:
            // Update an existing employee's information
            printf("\nEnter the ID of the employee to update: ");
            scanf("%d", &id);

            // Find the employee with the specified ID
            for (i = 0; i < num_employees; i++)
            {
                if (employees[i].id == id)
                {
                    // Update the employee's information
                    printf("\nEnter new information:\n");
                    printf("Name: ");
                    scanf("%s", employees[i].name);
                    printf("Position: ");
                    scanf("%s", employees[i].position);
                    printf("Salary: ");
                    scanf("%lf", &salary);
                    employees[i].salary = salary;
                    printf("\nEmployee information updated successfully.\n");
                    break;
                }
            }
            if (i == num_employees)
            {
                printf("\nEmployee not found.\n");
            }
            break;

        case 6:
            // Exit
            printf("\nExiting the program...\n");
            break;

        default:
            printf("\nInvalid choice. Please try again.\n");
            break;
        }
    }
    while (choice != 6);

// Free the memory allocated for the employees array
    free(employees);

    return 0;
}
