#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define the student structure
struct Student
{
    char name[50];
    int id;
    int year;
};

// Declare global variables
struct Student students[MAX_STUDENTS];
int num_students = 0;

// Function to add a new student
void add_student()
{
    // Check if the maximum number of students has been reached
    if (num_students >= MAX_STUDENTS)
    {
        printf("Error: Maximum number of students reached\n");
        return;
    }

    // Prompt the user for the student's information
    struct Student student;
    printf("Enter the student's name: ");
    scanf("%s", student.name);
    printf("Enter the student's ID: ");
    scanf("%d", &student.id);
    printf("Enter the student's year: ");
    scanf("%d", &student.year);

    // Add the student to the array of students
    students[num_students++] = student;
    printf("Student added successfully\n");
}

// Function to display information about all students
void display_students()
{
    if (num_students == 0)
    {
        printf("No students in the system\n");
        return;
    }

    printf("List of students:\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("Name: %s, ID: %d, Year: %d\n", students[i].name, students[i].id, students[i].year);
    }
}

// Function to search for a student by name
void search_student()
{
    char name[50];
    printf("Enter the name of the student to search for: ");
    scanf("%s", name);

    for (int i = 0; i < num_students; i++)
    {
        if (strcmp(students[i].name, name) == 0)
        {
            printf("Name: %s, ID: %d, Year: %d\n", students[i].name, students[i].id, students[i].year);
            return;
        }
    }

    printf("Student not found\n");
}

// Function to delete a student by ID
void delete_student()
{
    int id;
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < num_students; i++)
    {
        if (students[i].id == id)
        {
            // Shift all the students after the deleted one back by one index
            for (int j = i + 1; j < num_students; j++)
            {
                students[j - 1] = students[j];
}
        // Decrease the number of students by one
        num_students--;

        printf("Student deleted successfully\n");
        return;
    }
}

printf("Student not found\n");
}

int main()
{
int choice;
while (1)
{
    // Display the menu
    printf("\nMenu:\n");
    printf("1. Add a new student\n");
    printf("2. Display information about all students\n");
    printf("3. Search for a student by name\n");
    printf("4. Delete a student by ID\n");
    printf("5. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Handle the user's choice
    switch (choice)
    {
        case 1:
            add_student();
            break;
        case 2:
            display_students();
            break;
        case 3:
            search_student();
            break;
        case 4:
            delete_student();
            break;
        case 5:
            printf("Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice\n");
    }
}
}
