#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATES 100

typedef struct
{
    char name[50];
    int votes;
} candidate;

void add_candidate(candidate candidates[], int *num_candidates)
{
    char name[50];

    printf("Enter the name of the candidate: ");
    scanf("%s", name);

    candidate new_candidate;
    strcpy(new_candidate.name, name);
    new_candidate.votes = 0;

    candidates[*num_candidates] = new_candidate;
    *num_candidates += 1;

    printf("Candidate added successfully!\n");
}

void display_candidate(candidate candidate)
{
    printf("%-20s%-10d\n", candidate.name, candidate.votes);
}

void display_candidates(candidate candidates[], int num_candidates)
{
    printf("%-20s%-10s\n", "Name", "Votes");
    for (int i = 0; i < num_candidates; i++)
    {
        display_candidate(candidates[i]);
    }
}

void save_candidates(candidate candidates[], int num_candidates)
{
    FILE *fp = fopen("candidates.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to open candidates file for writing.\n");
        return;
    }

    for (int i = 0; i < num_candidates; i++)
    {
        fprintf(fp, "%s %d\n", candidates[i].name, candidates[i].votes);
    }

    fclose(fp);
    printf("Candidates saved to file.\n");
}

int load_candidates(candidate candidates[])
{
    FILE *fp = fopen("candidates.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open candidates file for reading.\n");
        return 0;
    }

    int num_candidates = 0;
    while (fscanf(fp, "%s %d", candidates[num_candidates].name, &candidates[num_candidates].votes) != EOF)
    {
        num_candidates++;
    }

    fclose(fp);
    printf("%d candidates loaded from file.\n", num_candidates);
    return num_candidates;
}

void vote(candidate candidates[], int num_candidates)
{
    char name[50];
    printf("Enter the name of the candidate you want to vote for: ");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < num_candidates; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Candidate not found.\n");
    }
    else
    {
        printf("Your vote has been counted.\n");
    }
}

int main()
{
    candidate candidates[MAX_CANDIDATES];
    int num_candidates = 0;

    num_candidates = load_candidates(candidates);

    int choice;
    do
    {
        printf("\nElection Database\n");
        printf("1. Add Candidate\n");
        printf("2. Display Candidates\n");
        printf("3. Save Candidates to File\n");
        printf("4. Vote\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_candidate(candidates, &num_candidates);
            break;
        case 2:
            display_candidates(candidates, num_candidates);
            break;
        case 3:
            save_candidates(candidates, num_candidates);
            break;
        case 4:
            vote(candidates, num_candidates);
            break;
        case 5:
            display_winner(candidates, num_candidates);
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
    while (choice != 6);

    return 0;
}
