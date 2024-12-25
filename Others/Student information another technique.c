#include <stdio.h>
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
            num_students--;
            printf("Student deleted successfully\n");
            return;
        }
    }

    printf("Student not found\n");
}

// Function to display the menu
void display_menu()
{
    printf("\n1. Add a new student\n");
    printf("2. Display information about all students\n");
    printf("3. Search for a student by name\n");
    printf("4. Delete a student by ID\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;

    do
    {
        display_menu();
        scanf("%d", &choice);

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
            // Function to save the list of students to a file
            void save_students()
            {
// Open the file for writing
                FILE *file = fopen("students.txt", "w");
                if (file == NULL)
                {
                    printf("Error: Unable to open file\n");
                    return;
                }// Write each student to the file
                for (int i = 0; i < num_students; i++)
                {
                    fprintf(file, "%s,%d,%d\n", students[i].name, students[i].id, students[i].year);
                }

// Close the file
                fclose(file);
                printf("List of students saved to file\n");
            }

// Function to load the list of students from a file
            void load_students()
            {
// Open the file for reading
                FILE *file = fopen("students.txt", "r");
                if (file == NULL)
                {
                    printf("Error: Unable to open file\n");
                    return;
                }// Read each line of the file and parse the student information
                char line[100];
                while (fgets(line, 100, file) != NULL)
                {
                    char *name = strtok(line, ",");
                    int id = atoi(strtok(NULL, ","));
                    int year = atoi(strtok(NULL, ",\n"));

                    // Create a new student and add it to the array
                    struct Student student;
                    strcpy(student.name, name);
                    student.id = id;
                    student.year = year;
                    students[num_students++] = student;
                }

// Close the file
                fclose(file);
                printf("List of students loaded from file\n");
            }

            int main()
            {
                int choice;// Load the list of students from the file
                load_students();

                do
                {
                    display_menu();
                    scanf("%d", &choice);

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
                        save_students();
                        break;
                    case 6:
                        printf("Exiting program\n");
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                    }
                }
                while (choice != 6);
                {
                }
                return 0;
            }





