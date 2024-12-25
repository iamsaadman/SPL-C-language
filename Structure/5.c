#include <stdio.h>

struct student {
  char name[50];
  char id[10];
  float cgpa;
};

int main() {

  struct student john;
  strcpy(john.name, "John Doe");
  strcpy(john.id, "123456");
  john.cgpa = 3.5;
  printf("Name: %s\n", john.name);
  printf("ID: %s\n", john.id);
  printf("CGPA: %.2f\n", john.cgpa);

  return 0;
}
