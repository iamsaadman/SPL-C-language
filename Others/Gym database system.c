#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMBERS 100

typedef struct
{
    char name[50];
    int age;
    char gender;
    float height;
    float weight;
} member;

void add_member(member members[], int *num_members)
{
    char name[50];
    int age;
    char gender;
    float height;
    float weight;

    printf("Enter the name of the member: ");
    scanf("%s", name);

    printf("Enter the age of the member: ");
    scanf("%d", &age);

    printf("Enter the gender of the member (M/F): ");
    scanf(" %c", &gender);

    printf("Enter the height of the member (in meters): ");
    scanf("%f", &height);

    printf("Enter the weight of the member (in kg): ");
    scanf("%f", &weight);

    member new_member;
    strcpy(new_member.name, name);
    new_member.age = age;
    new_member.gender = gender;
    new_member.height = height;
    new_member.weight = weight;

    members[*num_members] = new_member;
    *num_members += 1;

    printf("Member added successfully!\n");
}

void display_member(member member)
{
    printf("%-20s%-10d%-10c%-10.2f%-10.2f\n", member.name, member.age, member.gender, member.height, member.weight);
}

void display_members(member members[], int num_members)
{
    printf("%-20s%-10s%-10s%-10s%-10s\n", "Name", "Age", "Gender", "Height", "Weight");
    for (int i = 0; i < num_members; i++)
    {
        display_member(members[i]);
    }
}

void save_members(member members[], int num_members)
{
    FILE *fp = fopen("members.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to open members file for writing.\n");
        return;
    }

    for (int i = 0; i < num_members; i++)
    {
        fprintf(fp, "%s %d %c %.2f %.2f\n", members[i].name, members[i].age, members[i].gender, members[i].height, members[i].weight);
    }

    fclose(fp);
    printf("Members saved to file.\n");
}

int load_members(member members[])
{
    FILE *fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open members file for reading.\n");
        return 0;
    }

    int num_members = 0;
    while (fscanf(fp, "%s %d %c %f %f", members[num_members].name, &members[num_members].age, &members[num_members].gender, &members[num_members].height, &members[num_members].weight) != EOF)
    {
        num_members++;
    }

    fclose(fp);
    printf("%d members loaded from file.\n", num_members);
    return num_members;
}

int main()
{
    member members[MAX_MEMBERS];
    int num_members = 0;

    num_members = load_members(members);

    int choice;
    do
    {
        printf("\nGym Database\n");
        printf("1. Add Member\n");
        printf("2. Display Members\n");
        printf("3. Save Members to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_member(members, &num_members);
            break;

        case 2:
            display_members(members, num_members);
            break;

        case 3:
            save_members(members, num_members);
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }

    }
    while (choice != 4);

    return 0;
}
