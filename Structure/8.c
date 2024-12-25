#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

int main() {
    struct student s1, s2;

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

    if (s1.cgpa > s2.cgpa) {
        printf("\nStudent 1 has the higher CGPA.\n");
        printf("Name: %s\n", s1.name);
        printf("ID: %d\n", s1.id);
        printf("CGPA: %.2f\n", s1.cgpa);
    } else if (s1.cgpa < s2.cgpa) {
        printf("\nStudent 2 has the higher CGPA.\n");
        printf("Name: %s\n", s2.name);
        printf("ID: %d\n", s2.id);
        printf("CGPA: %.2f\n", s2.cgpa);
    } else {
        printf("\nBoth students have the same CGPA.\n");
    }

    return 0;
}
