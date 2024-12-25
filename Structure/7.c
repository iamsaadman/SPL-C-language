#include <stdio.h>

struct student {
  char name[50];
  char id[10];
  float cgpa;
};

int main() {

  struct student students[2];

  printf("Enter name of first student: ");
  scanf("%s", students[0].name);

  printf("Enter ID of first student: ");
  scanf("%s", students[0].id);

  printf("Enter CGPA of first student: ");
  scanf("%f", &students[0].cgpa);


  printf("Enter name of second student: ");
  scanf("%s", students[1].name);

  printf("Enter ID of second student: ");
  scanf("%s", students[1].id);

  printf("Enter CGPA of second student: ");
  scanf("%f", &students[1].cgpa);

  printf("Name of first student: %s\n", students[0].name);
  printf("ID of first student: %s\n", students[0].id);
  printf("CGPA of first student: %.2f\n", students[0].cgpa);

  printf("Name of second student: %s\n", students[1].name);
  printf("ID of second student: %s\n", students[1].id);
  printf("CGPA of second student: %.2f\n", students[1].cgpa);

  return 0;
}
