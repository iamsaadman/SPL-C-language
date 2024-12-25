#include <stdio.h>

struct student {
  char name[50];
  char id[10];
  float cgpa;
};

int main() {

  struct student john;


  printf("Enter name: ");
  scanf("%s", john.name);

  printf("Enter ID: ");
  scanf("%s", john.id);

  printf("Enter CGPA: ");
  scanf("%f", &john.cgpa);

  printf("Name: %s\n", john.name);
  printf("ID: %s\n", john.id);
  printf("CGPA: %.2f\n", john.cgpa);

  return 0;
}
