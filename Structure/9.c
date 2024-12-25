#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

struct student compare_cgpa(struct student s1, struct student s2) {
    if (s1.cgpa > s2.cgpa) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    struct student s1, s2, better;


    printf("Enter details for student 1:\n");
    printf("Name: ");
    fgets(s1.name, 50, stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("CGPA: ");
    scanf("%f", &s1.cgpa);

    while (getchar() != '\n');

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    fgets(s2.name, 50, stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("CGPA: ");
    scanf("%f", &s2.cgpa);

    better = compare_cgpa(s1, s2);

    printf("\nStudent with better CGPA:\n");
    printf("Name: %s\n", better.name);
    printf("ID: %d\n", better.id);
    printf("CGPA: %.2f\n", better.cgpa);

    return 0;
}
