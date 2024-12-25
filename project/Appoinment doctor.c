#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient
{
    char name[50];
    char gender[10];
    int age;
    char symptoms[100];
};

struct Appointment
{
    char date[20];
    char time[20];
    struct Patient patient;
    int available;
};

int main()
{
    struct Appointment appointment[50];
    int option, i, n = 0;
    char date[20], time[20], name[50];

    while (1)
    {
        printf("\n");
        printf("1. Add a new appointment\n");
        printf("2. Update an appointment\n");
        printf("3. Cancel an appointment\n");
        printf("4. Display all appointments\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nEnter appointment date (dd/mm/yyyy): ");
            scanf("%s", &date);
            printf("Enter appointment time (hh:mm): ");
            scanf("%s", &time);
            printf("\nEnter patient name: ");
            scanf("%s", &name);
            printf("Enter patient gender: ");
            scanf("%s", &appointment[n].patient.gender);
            printf("Enter patient age: ");
            scanf("%d", &appointment[n].patient.age);
            printf("Enter patient symptoms: ");
            scanf("%s", &appointment[n].patient.symptoms);
            strcpy(appointment[n].date, date);
            strcpy(appointment[n].time, time);
            strcpy(appointment[n].patient.name, name);
            appointment[n].available = 1;
            printf("\nAppointment added successfully.\n");
            n++;
            break;
        case 2:
            printf("\nEnter appointment date and time to update (dd/mm/yyyy hh:mm): ");
            scanf("%s %s", &date, &time);
            for (i = 0; i < n; i++)
            {
                if (strcmp(appointment[i].date, date) == 0 && strcmp(appointment[i].time, time) == 0)
                {
                    printf("\nEnter new appointment date (dd/mm/yyyy): ");
                    scanf("%s", &date);
                    printf("Enter new appointment time (hh:mm): ");
                    scanf("%s", &time);
                    printf("\nEnter patient name: ");
                    scanf("%s", &name);
                    printf("Enter patient gender: ");
                    scanf("%s", &appointment[i].patient.gender);
                    printf("Enter patient age: ");
                    scanf("%d", &appointment[i].patient.age);
                    printf("Enter patient symptoms: ");
                    scanf("%s", &appointment[i].patient.symptoms);
                    strcpy(appointment[i].date, date);
                    strcpy(appointment[i].time, time);
                    strcpy(appointment[i].patient.name, name);
                    printf("\nAppointment updated successfully.\n");
                    break;
                }
            }
            if (i == n)
            {
                printf("Appointment not found.\n");
            }
            break;
        case 3:
            printf("\nEnter appointment date and time to cancel (dd/mm/yyyy hh:mm): ");
            scanf("%s %s", &date, &time);
            for (i = 0; i < n; i++)
            {
                if (strcmp(appointment[i].date, date) == 0 && strcmp(appointment[i].time, time) == 0)
                {
                    if (appointment[i].available == 1)
                    {
                        appointment[i].available = 0;
                        printf("\nAppointment cancelled successfully.\n");
                        break;
                    }
                    else
                    {
                        printf("Appointment already cancelled.\n");
                        break;
                    }
                }
            }
            if (i == n)
            {
                printf("Appointment not found.\n");
            }
            break;
        case 4:
            printf("\n");
            printf("%-20s%-20s%-20s%-20s%-20s%-20s\n", "Appointment Date", "Appointment Time", "Patient Name", "Gender", "Age", "Symptoms");
            for (i = 0; i < n; i++)
            {
                printf("%-20s%-20s%-20s%-20s%-20d%-20s\n", appointment[i].date, appointment[i].time, appointment[i].patient.name, appointment[i].patient.gender, appointment[i].patient.age, appointment[i].patient.symptoms);
            }
            break;
        case 5:
            printf("\nExiting the program...\n");
            exit(0);
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}
